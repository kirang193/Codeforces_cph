#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,s,r;cin>>n>>s>>r;
    vector<int>v(n-1,r/(n-1));
    // for(auto x:v)cout<<x<<" ";
    // cout<<endl;
    int rem = (r)%(n-1);
    for(int i=0;i<rem;i++)v[i]+=1;
    v.push_back(s-r);
    for(auto x:v)cout<<x<<" ";
    cout<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}