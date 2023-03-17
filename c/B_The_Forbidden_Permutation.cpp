#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,m,d;
    cin>>n>>m>>d;
    int p[n+1],pos[n+1],a[m+1],ans=n;
    for(int i=1;i<=n;i++){
        cin>>p[i];
        pos[p[i]]=i;
    }
    for(int i=1;i<=m;i++)cin>>a[i];
    for(int i=2;i<=m;i++){
        if(pos[a[i-1]]>pos[a[i]]){ans=0;break;}
        else if(pos[a[i]]-pos[a[i-1]]>d){ans=0;break;}
        else{
            ans = min(ans,pos[a[i]]-pos[a[i-1]]);
            int moves_needed = (d-(pos[a[i]]-pos[a[i-1]]-1));
            int moves_we_can_make = (pos[a[i-1]]-1+n-pos[a[i]]);
            if(moves_needed<=moves_we_can_make)
                ans = min(ans,moves_needed);
        }
    }
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