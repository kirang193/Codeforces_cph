#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,x,p;cin>>n>>x>>p;
    // (x + f*(f+1)/2)%n == 0 yes
    for(int f=1;f<=min(p,2*n);f++){
        if((x+(f*(f+1)/2)%n)%n==0)
            {
                cout<<"Yes\n";return;
            }
    }
    cout<<"No\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}