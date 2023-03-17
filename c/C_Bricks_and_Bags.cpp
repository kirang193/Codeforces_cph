#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int maxi=INT_MIN;//b2-b1+b2-b3
    //if b2 is left bag3=a[n-1]
    //b3-b2+b1-b2
    for(int i=0;i<n-2;i++){
        maxi=max(maxi,a[n-1]-2*a[i]+a[i+1]);
    }
    //if b2 is right bag3=a[0]
    //b2-b1+b2-b3
    for(int i=1;i<n-1;i++){
        maxi=max(maxi,2*a[i+1]-a[i]-a[0]);
    }
    cout<<maxi<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}