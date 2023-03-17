#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    map<int,int>mp;
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]=m+1;
    }
    int pos,val;
    for(int i=0;i<m;i++){
        cin>>pos>>val;
        mp[v[pos-1]]-=(m-i);
        v[pos-1]=val;
        mp[val] += (m-i);
    }
    int maxi = 2*n*(m+1)*(m)/2;
    for(auto x:mp){
        maxi-=x.second*(x.second-1)/2;
    }
    cout<<maxi<<endl;


}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}