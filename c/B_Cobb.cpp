#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,k;cin>>n>>k;int a[n+1];
    for(ll i=1;i<=n;i++)cin>>a[i];
    ll ans = INT_MIN;
    ll i = max(1,n-2*k);
    //cout<<i<<endl;
    for(i;i<n;i++){
        for(ll j=i+1;j<=n;j++){
            ans = max(ans,(long long)(i*j-k*(a[i]|a[j])));
        }
    }
    cout<<ans<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}