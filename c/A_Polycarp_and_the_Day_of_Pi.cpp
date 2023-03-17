#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    string s;cin>>s;
    int ans = 0;
    string pi = "3141592653589793238462643383279";
    for(int i=0;i<s.length();i++){
        if(s[i]==pi[i])ans++;
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