#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    string s[n];
    int dp[n+1][n+1];
    for(int i=0;i<n;i++)dp[i][0]=0,dp[0][i]=0;
    for(int i=1;i<=n;i++)cin>>s[i];
    
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}