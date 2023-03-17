#include <bits/stdc++.h>
using namespace std;
#define int long long int
int n;
vector<int>value;
int dfs(vector<int> *v, int i, int ans){
    if(value[i]!=-1)return;
    int len = v[i].size();
    if(len==0)return 0;

    return 
}
void solve(){
    int n,x,y;cin>>n;
    value.resize(n+1,-1);
    vector<int>v[n+1];
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        sort(v[i].begin(),v[i].end());
        if(v[i].size()==0)value[i]=1;
    }
    int len = v[1].size();
    bool is = 1;
    for(int i=0;i<(len+1)/2;i++){
        dfs(v,i,0)
    }
    cout<<"YES\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}