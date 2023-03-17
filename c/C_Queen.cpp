#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x,root;bool y;cin>>n;
    vector<int>p(n+1);
    vector<bool>resp(n+1);
    vector<int>g[n];
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        g[i].push_back(x);
        g[x].push_back(i);
        if(x==-1)root=i;
        resp[x]=y;
    }
    vector<int>ans;
    bool c;
    vector<bool>vis(n+1,0);
    function<void(int, int)> dfs = [&](int i, int check){
        vis[i]= true;
        c = resp[i];
        for(int j=1; j< g[i].size(); j++){
            if(!vis[g[i][j]]){
                dfs(g[i][j],c);

            }
        }
        if(c==1)ans.push_back(i);
    }
    dfs(root,resp[root]);
    
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}