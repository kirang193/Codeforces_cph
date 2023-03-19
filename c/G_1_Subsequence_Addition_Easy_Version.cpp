#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    if(n==1 && a[0]!=1){
        cout<<"NO\n";return;
    }
    sort(a,a+n);
    int sum = 1;
    for(int i=1;i<n;i++){
        if(a[i]>sum){
            cout<<"NO\n";
            return;
        }
        sum+=a[i];
    }
    cout<<"YES\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}