#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n,k,l,r;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    cin>>k;
    while(k--){
        cin>>l>>r;
        int left = lower_bound(a,a+n,l)-a;
        int right = upper_bound(a,a+n,r)-a;
        cout<<right-left<<" ";
    }
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}