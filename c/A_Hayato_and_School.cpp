#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;int a[n];bool flag=0;
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>od,ev;
    for(int i=0;i<n;i++){
        if(a[i]%2)od.push_back(i+1);
        else ev.push_back(i+1);
        if(od.size()>=3 || (ev.size()>=2 && od.size()>=1)){flag=1;break;}
    }
    if(flag==0){
        cout<<"NO\n";return;
    }
    cout<<"YES\n";
    if(od.size()==3){
        for(auto x:od)cout<<x<<" ";
        cout<<endl;
    }else{
        for(int i=0;i<2;i++)cout<<ev[i]<<" ";
        cout<<od[0]<<endl;
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