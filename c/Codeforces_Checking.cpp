#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    char c;cin>>c;
    string s = "codeforces";
    for(int i=0;i<10;i++){
        if(s[i]==c){cout<<"YES\n";return;}
    }
    cout<<"NO\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}