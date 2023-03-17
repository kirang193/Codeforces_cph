#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k;cin>>n>>k;int l=1,r=n;
    for(int i=1;i<=n;i++){
        if(i%k){cout<<r<<" ";r--;}
        else {cout<<l<<" ";l++;}
    }
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