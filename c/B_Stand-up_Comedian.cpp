#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int a1,a2,a3,a4,ans=0;
    cin>>a1>>a2>>a3>>a4;
    if(a1==0){cout<<1<<endl;return;}
    int alice = a1,bob = a1;ans= a1;
    int temp = min(a2,a3);
    ans+=(2*temp);
    int rem = abs(a2-a3)+a4;
    ans+=min(a1,rem);
    if(rem>a1)ans++;
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