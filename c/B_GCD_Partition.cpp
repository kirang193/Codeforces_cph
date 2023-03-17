#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;int a[n],suff[n+1];suff[n]=0LL;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--)
        suff[i]=suff[i+1]+a[i];
    //for(int i=0;i<n;i++)cout<<suff[i]<<" ";
    //cout<<endl;
    int sum =0,gcd=1;
    for(int i=0;i<n-1;i++){
        sum+=a[i];
        gcd = max(gcd,__gcd(sum,suff[i+1]));
    }
    cout<<gcd<<endl;


}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}