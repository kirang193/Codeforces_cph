#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k,target;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<k;i++){
        cin>>target;
        int index = upper_bound(a,a+n,target)-a;
        if(a[index-1]==target)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}