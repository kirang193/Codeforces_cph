#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,index=1;cin>>n;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<n;i++)
        if(a[i]==-1){
            index=i;
            break;
        }
    for(int i=1;i<n;i++)
        if(a[i]==-1&&a[i-1]==-1){
            index=i;
            break;
        }
    
    a[index]*=-1;
    a[index-1]*=-1;
    int sum=0;
    for(int i=0;i<n;i++)sum+=a[i];
    cout<<sum<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}