#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    int a[n+1],dp[n+1];dp[0]=1;
    for(int i=1;i<=n;i++){
        cin>>a[i];dp[i]=0;
    }
    for(int i=1;i<=n;i++){
        if(dp[i-1]&&i+a[i]<=n)dp[i+a[i]]=1;
        if(i-a[i]-1>=0&&dp[i-a[i]-1])dp[i]=1;
    }
    if(dp[n])cout<<"YES\n";
    else cout<<"NO\n";

}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}