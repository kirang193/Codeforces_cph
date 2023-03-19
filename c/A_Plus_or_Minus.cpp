#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int a,b,c;cin>>a>>b>>c;
    if(a+b==c)cout<<"+\n";
    else cout<<"-\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}