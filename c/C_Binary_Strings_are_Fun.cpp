#include <bits/stdc++.h>
using namespace std;
#define mod 998244353L
#define int long long int
int powa(int x){
    if(x==0)return 1;
    if(x%2)return (2*powa(x-1)%mod)%mod;
    return ((powa(x/2)%mod)*(powa(x/2)%mod))%mod;
}
void solve(){
    int n;string s;cin>>n>>s;
    int sum,one;vector<int>v={0};
    sum=0;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1])sum++;
        else sum=0;
        v.push_back(sum);
    }long long ans=0L;
    for(auto x:v){ans=(powa(x)%mod+ans%mod)%mod;}
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