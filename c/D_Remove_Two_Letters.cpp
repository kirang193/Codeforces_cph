#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;string s;cin>>n>>s;
    int ans=1;
    for(int i=1;i<n-1;i++){
        if(s[i-1]!=s[i+1])ans++;
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