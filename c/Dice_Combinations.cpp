#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    float a,m;cin>>a>>m;
    cout<<(int)((floor)(a/m));
    cout<<(((int)a)-((int)((floor)(a/m)))*((int)m));
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}