#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,x;cin>>n;
    int pos[n+1];
    for(int i=1;i<=n;i++){
        cin>>x;
        pos[x]=i;
    }
    int ans = n/2, l = (n+1)/2, r = n/2 + 1;
    if(l == r)l--,r++;
    while(l>0 && pos[l]<pos[l+1] && pos[r]>pos[r-1])
        l--,r++,ans--;
    cout<<ans<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}