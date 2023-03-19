#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,q;cin>>n>>q;
    int a[n+1],p[n+1];p[1]=1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=2;i<=n;i++){
        cin>>p[i];
    }
    while(q--){
        int x,y,ans=0;
        cin>>x>>y;
        while(x!=1 && y!=1){
            ans+=(a[x]*a[y]);
            x = p[x];y = p[y];
        }
        cout<<ans+1<<endl;
    }
    return 0;
}