#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int max=a[0],min=a[0];
    for(int i=1;i<n;i++){
        max|=a[i];
        min&=a[i];
    }
    cout<<max-min<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}