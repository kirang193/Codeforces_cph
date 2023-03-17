#include <bits/stdc++.h>
using namespace std;
#define int long long int
int n;
string s;
int ans;
vector<bool>check;
vector<int>parent;
vector<vector<int>>graph;

pair<int,int> dfs(int node){
    check[node] = true;
    int whites = 0, blacks = 0;
    if(s[node]=='W')whites++;
    else blacks++;
    for(int i=0;i<graph[node].size();i++){
        if(check[graph[node][i]]==0){
            pair<int,int> temp = dfs(graph[node][i]);
            whites += temp.first;
            blacks += temp.second;
        }
    }
    if(whites==blacks)ans +=1;
    return {whites,blacks};
}


void solve(){
    cin>>n;
    check.resize(n+1,0);
    parent.resize(n+1,1);
    graph.resize(n+1,vector<int>());
    int x;
    ans = 0LL;
    parent[1]=1;
    for(int i=2;i<=n;i++){
        cin>>x;
        parent[i]=x;
        graph[i].push_back(parent[i]);
        graph[parent[i]].push_back(i);
    }
    cin>>s;
    s = '?'+s;// 1 based indexing
    dfs(1);
    cout<<ans<<endl;
    check.clear();
    parent.clear();
    graph.clear();
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}