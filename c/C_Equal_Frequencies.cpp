#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    map<int,vector<int>>m;
    vector<pair<int,int>>a;
    for(int i=0;i<n;i++){
        m[s[i]-'a'].push_back(i);
    }
    for(int i=0;i<26;i++){
        a.push_back({m[i].size(),i});
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int ans = n, d, p=n;
    //d -> count of chars
    for(d=1;d<=n;d++){
        int k=n/d,x=0;//k-> no of distinct char,
        if(n%d)continue;// x->cost
        if(n/d>26)continue;
        for(int i=0;i<k;i++){
            if(a[i].first>d)x+=(a[i].first-d);
        }
        for(int i=k;i<26;i++){
            x+=a[i].first;
        }
        if(ans>x){
            ans = x;
            p = d;
        }
    }
    int k=n/p;set<int>pos;
    for(int i=0;i<k;i++){
        if(a[i].first>p){
            for(int j=p;j<m[a[i].second].size();j++){
                pos.insert(m[a[i].second][j]);
            }
        }
    }
    for(int i=k;i<26;i++){
        for(int j=0;j<m[a[i].second].size();j++){
            pos.insert(m[a[i].second][j]);
        }
    }
    for(int i=0;i<k;i++){
        if(a[i].first<p){
            int extra = p - a[i].first;
            for(int j=0;j<extra;j++){
                int x = *pos.begin();
                pos.erase(x);
                s[x] = char(a[i].second+'a');
            }
        }
    }
    cout<<ans<<endl<<s<<endl;

}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}