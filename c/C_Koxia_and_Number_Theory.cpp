#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;map<int,int>m;int a[n];
    for(int i=0;i<n;i++){cin>>a[i];m[a[i]]++;}
    for(auto x:m){
        if(x.second>=2){cout<<"NO\n";return;}
    }
    for(int i=2;i<=n;i++){
        map<int,int>m2;
        for(int k=0;k<i;k++)m2[k]=0;
        for(int j=0;j<n;j++){
            m2[a[j]%i]++;
        }
        int mini=INT_MAX;
        for(auto x:m2)mini=min(mini,x.second);
        if(mini>=2){cout<<"NO\n";return;} 
    }
    cout<<"YES\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}