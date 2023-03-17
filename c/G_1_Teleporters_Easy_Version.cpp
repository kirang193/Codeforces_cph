#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,c,x;cin>>n>>c;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>x;
        a[i] = i+1+x;
    }
    sort(a,a+n);
    // for(auto x:a)cout<<x<<" ";
    // cout<<endl;
    int sum=0,ans=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum<=c)ans++;
        else break;
    }
    cout<<ans<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}