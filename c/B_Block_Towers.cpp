#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n-1);
    for(int i=0;i<n-1;i++)   cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++)
        if(a[i]>k)k+=(a[i]-k+1)/2;
    cout<<k<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}