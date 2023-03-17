#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;int a[n];
    int l=0,r=0,m=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]!=i+1)l++;
        if(a[i]!=(n-i))r++;
        if(a[i]!=i+1&&a[i]!=(n-i))m++;
    }
    if(l+m<=r)cout<<"First";
    else if(l>r+m)cout<<"Second";
    else cout<<"Tie";
    cout<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}