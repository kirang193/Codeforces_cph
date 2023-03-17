#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    map<char,int>mp1,mp2;
    int ans = 0;
    int pre[n],suf[n];
    for(int i=0;i<n;i++){
        mp1[s[i]]++;
        pre[i]=mp1.size();
        
    }
    for(int i=n-1;i>=0;i--){
        mp2[s[i]]++;
        suf[i]=mp2.size();
    }
    ans = pre[0];
    // for(auto x:pre)cout<<x<<" ";
    // cout<<endl;
    // for(auto x:suf)cout<<x<<" ";
    // cout<<endl;
    for(int i=0;i<n-1;i++){
        ans = max(pre[i]+suf[i+1],ans);
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