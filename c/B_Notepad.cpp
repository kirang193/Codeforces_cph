#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    map<string,int>m;
    for(int i=1;i<n;i++){
        if(m[s.substr(i-1,2)]){cout<<"YES\n";return;}
        m[s.substr(i-1,2)]++;
        if(s[i]==s[i-1]&&s[i]==s[i+1])i++;
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