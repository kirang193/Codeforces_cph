#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,m,x;cin>>n>>m;map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    vector<int>tables(m);
    for(int i=0;i<m;i++){
        cin>>tables[i];
    }
    sort(tables.begin(),tables.end(),greater<int>());
     //for(auto x:tables)cout<<x<<" ";cout<<endl;
    priority_queue<int>pq;
    for(auto x:mp){
        pq.push(x.second);
    }
    int ans = 0;
    for(int i=0;i<m;i++){
        int k = pq.top();
        if(k==0)break;
        if(k<=tables[i]){
            ans+=k;
            
        }else{
            ans+=(tables[i]);
            pq.push(k-tables[i]);
        }
        pq.pop();
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