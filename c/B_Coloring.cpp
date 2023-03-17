#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,m,k,x,y=-1;cin>>n>>m>>k;int a[m];
    int count=0;
    for(int i=0;i<m;i++){
        cin>>a[i];
        y=max(y,a[i]);
    }
    if(y==((n-1)/k+1)){
    for(int i=0;i<m;i++){
        if(a[i]==y)count++;
    }
    if(count>((n-1)%k+1)){cout<<"NO\n";}
    else{
        cout<<"YES\n";
    }return;
    }
    // cout<<ceil((float)n/(float)k);
    if(y>(n-1)/k+1)cout<<"NO\n";
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