#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,x,y,p;
    cin>>n>>x>>y;
    int sum=(x+y)&1;
    for(int i=0;i<n;i++){
        cin>>p;sum+=p;
        sum&=1;
    }
    if(sum&1)cout<<"Bob\n";
    else cout<<"Alice\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}