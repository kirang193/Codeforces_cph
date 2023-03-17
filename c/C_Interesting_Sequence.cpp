#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll oper(ll n,ll m){
    ll ans = 0ll;
    for(int i=63;i>=0;i--){
        if((n&(1ll<<i))!=(m&(1ll<<i)))break;
        else ans |= (n&(1ll<<i));
    }
    return ans;

}
void solve(){
    ll n,x;cin>>n>>x;
    ll l = n,r = 5e18;
    ll ans=-1;
    while(l<=r){
        ll mid = (l+r)/2;
        ll temp = oper(n, mid);
        if(x<temp)l=mid+1;
        else if(x>temp)r=mid-1;
        else{
            ans=mid;
            r=mid-1;
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