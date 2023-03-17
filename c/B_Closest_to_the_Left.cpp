#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    //max i such that a[i] <= target
    int n,k,target;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<k;i++){
        cin>>target;
        int index = lower_bound(a,a+n,target+1)-a;
        cout<<index<<endl;
    }
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}