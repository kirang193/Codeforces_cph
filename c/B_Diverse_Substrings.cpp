#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;string s;cin>>n>>s;
    int ans=0LL;
    map<int,int>m;
    for(int i=0;i<n;i++){
        int dis=0,max_occurences=0;
        m.clear();
        for(int j=i;j<n;j++){
            if(m[s[j]-'0']==0)dis++;
            m[s[j]-'0']++;
            max_occurences=max(m[s[j]-'0'],max_occurences);
            if(max_occurences>10LL)break;
            if(dis>=max_occurences)ans++;
        }
    }cout<<ans<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}