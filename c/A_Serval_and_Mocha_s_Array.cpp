#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    bool ok = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(a[i],a[j])<=2){
                ok=1;
                break;
            }
        }
    }
    if(!ok)cout<<"No\n";
    else cout<<"Yes\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}