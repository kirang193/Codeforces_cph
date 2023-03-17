#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    // min i such that a[i]>=k;
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<k;i++){
        int target;cin>>target;
        int index = lower_bound(a,a+n,target)-a;
        cout<<index+1<<endl;
    }
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}