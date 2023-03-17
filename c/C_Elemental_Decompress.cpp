#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define prntN {cout<<"NO\n";return;}
#define prntY {cout<<"YES\n";}
void solve(){
    int n,x;cin>>n;
    vector<int>v(n),p(n+1,0),q(n+1,0),p_s(n+1,-1),q_s(n+1,-1);
    set<int>sp,sq;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sp.insert(i+1),sq.insert(i+1);
    }
    for(int i=0;i<n;i++){
        if(p_s[v[i]]==-1){
            p_s[v[i]]=i;
            p[i]=v[i];
            sp.erase(v[i]);
        }else if(q_s[v[i]]==-1){
            q_s[v[i]]=i;
            q[i]=v[i];
            sq.erase(v[i]);
        }
        else prntN;
    }
    for(int i=0;i<n;i++){
        if(p_s[v[i]]==i){
            auto itr = sq.upper_bound(v[i]);
            if(itr==sq.begin())prntN;
            itr = prev(itr);
            q[i]=*itr;
            sq.erase(q[i]);
        }else if(q_s[v[i]]==i){
            auto itr = sp.upper_bound(v[i]);
            if(itr==sp.begin())prntN;
            itr = prev(itr);
            p[i]=*itr;
            sp.erase(p[i]);
        }
    }
    prntY;
    for(int i=0;i<n;i++)cout<<p[i]<<" ";cout<<endl;
    for(int i=0;i<n;i++)cout<<q[i]<<" ";cout<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}