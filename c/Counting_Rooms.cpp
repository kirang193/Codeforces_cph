#include <bits/stdc++.h>
using namespace std;
#define int long long int
int ans=0,n,m;int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
char a[1000][1000];bool visited[1000][1000];
void dfs(int i,int j){
    if(visited[i][j]==1)return;
    visited[i][j]=1;
    if(a[i][j]=='#')return;
    if(a[i][j]=='.'){
        for(int x=0;x<4;x++)
            for(int y=0;y<4;y++){
                if(i+dx[x]>=0&&i+dx[x]<n&&j+dy[y]>=0&&j+dy[y]<m && a[i+dx[x]][j+dy[y]]=='.')dfs(i+dx[x],j+dy[y]);
            }
    }
    
}
void solve(){
    cin>>n>>m;
    //char a[n][m];bool visited[n][m];
    //cout<<n<<m;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        {cin>>a[i][j];visited[i][j]=0;}
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            if(a[i][j]=='.'&&!visited[i][j]){
                ans++;
                dfs(i,j);
            }
            
        }
    
    cout<<ans;

}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}