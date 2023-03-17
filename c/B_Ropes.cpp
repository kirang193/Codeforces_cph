#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    float l = 0.0, r = 10000000.0;
    while((r-l)>0.000001){
        float m = (l+r)/2.0;
        int ans = 0;
        for(int i=0;i<n;i++){
            ans += (a[i]/m);
        }
        if(ans<k){
            r = m;
        }else{
            l = m;
        }
    }
    cout<<setprecision(20)<<l;;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}