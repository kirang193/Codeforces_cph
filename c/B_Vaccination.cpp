#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k,d,w;cin>>n>>k>>d>>w;
    int a[n], ans=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;){
        int up_bd = a[i] + d + w;
        int index = upper_bound(a,a+n,up_bd)-a;
        ans++;
        i+=min(k,index-i);
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