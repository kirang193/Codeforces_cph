#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int a,b,c,d,ans=0;cin>>a>>b>>c>>d;
    if(d<b){cout<<"-1\n";return;}
    ans = d-b;
    a+=ans;
    if(a<c){cout<<"-1\n";return;}
    ans+=(a-c);
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