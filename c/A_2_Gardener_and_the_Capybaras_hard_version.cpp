#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    string s;cin>>s;int n=s.length();
    if(s[1]=='b')cout<<s[0]<<" "<<s.substr(1,n-2)<<" "<<s[n-1];
    else cout<<s[0]<<" "<<'a'<<" "<<s.substr(2,n-2);
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