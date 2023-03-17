#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    vector<pair<int,int>>freq;
    for(auto x:mp){
        freq.push_back({x.first,x.second});
    }
    reverse(freq.begin(),freq.end());
    // for(auto x:freq){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    int ans = freq[0].second;
    for(int i=1;i<freq.size();i++){
        if((freq[i-1].first-freq[i].first)==1){
            ans += max(0LL, freq[i].second-freq[i-1].second);
        }else{
            ans+=(freq[i].second);
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