#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n,k;cin>>n>>k;vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>v[i].second;
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    vector<int>health(n),power(n);
    for(int i=0;i<n;i++){
        health[i]=v[i].first;
        power[i]=v[i].second;
    }
    while(health.size()!=0 || k>0){
        for(int i=health.size()-1;i>=0;i--){
            if(health.size()==0){cout<<"YES\n";return;}
            else if(k<=0){cout<<"NO\n";return;}
            if(health[i]<=k){health.pop_back();power.pop_back();}
            else{
                health[i]-=k;
            }
        }
        k-=*min_element(power.begin(),power.end());
    }
    if(health.size()==0)cout<<"YES\n";
    else cout<<"NO\n";

}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}