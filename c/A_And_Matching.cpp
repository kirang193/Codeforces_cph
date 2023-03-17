#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k;cin>>n>>k;
    if(k==n-1){
        if(n<8){cout<<"-1\n";return;}
        for(int i=3;i<=(n-1)/2;i++){
            cout<<i<<" "<<((n-1)^i)<<endl;
        }
        cout<<n-2<<" "<<n-1<<endl;
        cout<<1<<" "<<n-3<<endl;
        cout<<0<<" "<<2<<endl;
    }else if(k==0){
        for(int i=0;i<n/2;i++){
            cout<<i<<" "<<((n-1)^i)<<endl;
        }
    }else{
        cout<<0<<" "<<((n-1)^k)<<endl;
        cout<<k<<" "<<n-1<<endl;
        for(int i=1;i<n/2;i++){
            if(i==k || i==((n-1)^k))continue;
            cout<<i<<" "<<((n-1)^i)<<endl;
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}