#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int odd=0,eve=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0)eve+=a[i];
        else odd+=a[i];
    }
    if(eve>odd)cout<<"YES\n";
    else cout<<"NO\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}