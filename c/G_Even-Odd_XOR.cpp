#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    int x = (1LL<<29)^(1LL<<30);
    for(int i=1;i<n-2;i++){
        cout<<i<<" ";
        x^=i;
    }
    cout<<(1LL<<29)<<" "<<(1LL<<30)<<" "<<x<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}