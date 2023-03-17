#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if((x1==x2||x2==x3||x1==x3)&&(y1==y2||y2==y3||y1==y3))cout<<"NO\n";
    else cout<<"YES\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}