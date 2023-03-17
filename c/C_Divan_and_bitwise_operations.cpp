#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1e9+7;
int calc(int n){
    if(n==0)return 1;
    if(n%2)return ((calc(n-1)%mod)*2)%mod;
    return (calc(n/2)%mod*calc(n/2)%mod)%mod;
}
void solve(){
    int n,m,l,r,x;
    cin>>n>>m;
    int total_or = 0;
    while(m--){
        cin>>l>>r>>x;
        total_or|=x;
    }
    int pow2 = calc(n-1);
    cout<<((total_or%mod)*(pow2%mod))%mod<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}