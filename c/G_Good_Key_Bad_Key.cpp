#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int curr = 0LL, good_sum =0LL,ans=0LL;
    for(int i=0;i<n;i++){
        curr = good_sum;
        for(int j=i;j<min(n,i+31);j++){
            int temp = (a[j]>>(j-i+1LL));
            curr += temp;
        }
        ans = max(ans, curr);
        //cout<<ans<<endl;
        good_sum += a[i]-k;
    }
    ans = max(ans, good_sum);
    //cout<<endl;
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