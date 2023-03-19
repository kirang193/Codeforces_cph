#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;int a[n+1],pre[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(i!=0)pre[i]=pre[i-1]+a[i];
        else pre[i]=a[i];
    }
    int l = 1, r = n;
    int m;
    while(l<r){
        m = (l+r)/2;
        cout<<"? "<<(m-l+1)<<" ";
        int sum=0,x;
        for(int i=l;i<=m;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        cout.flush();
        cin>>x;
        if(x==(pre[m]-pre[l-1])){
            l=m+1;
        }else r=m;
    }
    cout<<"! "<<l<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}