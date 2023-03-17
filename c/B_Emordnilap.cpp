#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define m 1000000007
void solve(){
    int n;cin>>n;int ans=1;
    for(int i=1;i<=n;i++)ans=(ans*i)%m;
    ans = (ans*n)%m;
    ans = (ans*(n-1))%m;
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