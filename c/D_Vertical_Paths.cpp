#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    
    int n,x;cin>>n;
    vector<int>paths[n+1];
    vector<int>check(n+1,0);
    vector<int>leaf(n+1,1);
    vector<int>parent(n+1);
    for(int i=1;i<=n;i++){
        cin>>x;
        parent[i]=x;
        leaf[x]=0;
    }
    if(n==1){cout<<"1\n1\n1\n\n";return;}
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(!leaf[i])continue;
        check[i]=true;
        paths[ans].push_back(i);
        int curr = i;
        while(!check[parent[curr]] && parent[curr]!=curr){
            curr = parent[curr];
            check[curr]=true;
            paths[ans].push_back(curr);
        }
        ans++;
    }
    cout<<ans<<endl;
    for(int i=0;i<=n;i++){
        if(paths[i].size()==0)continue;
        cout<<paths[i].size()<<endl;
        for(int j=paths[i].size()-1;j>=0;j--){
            cout<<paths[i][j]<<" ";
        }
        cout<<endl;
    }
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