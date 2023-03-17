#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    string s;
    cin>>s;
    cout<<(9*(s.length()-1)+s[0]-'0')<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}