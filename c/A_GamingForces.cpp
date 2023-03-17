#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    int a[n];int one =0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)one++;
    }
    cout<<((one+1)/2+(n-one))<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}