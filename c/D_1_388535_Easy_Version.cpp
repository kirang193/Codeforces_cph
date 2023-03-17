#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int l,r;cin>>l>>r;
    int n = r-l+1;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<vector<int>>bits(32,vector<int>(2,0));
    for(int i=0;i<n;i++){
        int temp = a[i];
        for(int j=0;j<31;j++){
            bits[j][temp&1]++;
            temp>>=1;
        }
    }
    int ans = 0;
    for(int i=0;i<32;i++){
        if(bits[i][1]>bits[i][0])ans|=(1<<i);
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