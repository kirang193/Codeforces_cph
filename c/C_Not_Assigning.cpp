#include <bits/stdc++.h>
using namespace std;
// #define int long long int
void solve(){
    int n,x,y;cin>>n;
    vector<int>a[n+1];
    map<pair<int,int>,int>mp;
    vector<int>ans(n+1);
    for(int i=1;i<=n-1;i++){
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
        mp[{x,y}]=i;
        //mp[{y,x}]=i;
    }
    int start=-1,end = -1;
    for(int i=1;i<=n;i++){
        int sz = a[i].size();
        if(sz>=3){cout<<"-1\n";return;}
        else if(sz==1){
            if(start==-1)
                start = i;
            else 
                end = i;
        }
    }
    

    vector<int>vis(n+1,0);
    int prime = 2;
    function<void(int)> dfs = [&] (int index) {
        vis[index]=1;
        int nextNode = a[index][0];
        if(index == end)return;
        if(vis[a[index][0]])
            nextNode = a[index][1];
        if(mp[{index,nextNode}]){
            ans[mp[{index,nextNode}]]=prime;
        }else{
            ans[mp[{nextNode,index}]]=prime;
        }
        prime = 5 - prime;
        dfs(nextNode);
    };
    dfs(start);
    for(int i=1;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}