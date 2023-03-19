#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,q;cin>>n>>q;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<int>v(n+1);
    v[0]=0;
    for(int i=1;i<=n;i++){
        v[i] = v[i-1];
        if(a[i]%2)
            v[i]++;
    }
    // for(auto x:v)cout<<x<<" ";
    // cout<<endl;

    while(q--){
        int l,r,k;cin>>l>>r>>k;
        int odd=0;
        odd = v[n] - (v[r]-v[l-1]);
        // if(l!=1){
        //     odd += v[l-1];
        // }
        if(k%2){
            odd+=(r-l+1);
        }
        //cout<<odd<<endl;
        if(odd%2){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
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