#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int one=0,zero=0;
    for(int i=0;i<n;i++)
        if(s[i]=='1')one++;
        else zero++;
    for(int i=(1<<one);i<=((1<<n)-(1<<zero)+1);i++)
        cout<<i<<" ";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}