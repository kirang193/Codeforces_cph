#include <bits/stdc++.h>
using namespace std;
// #define int long long int
void solve(){
    int n,k;cin>>n>>k;int ans=0;
    string s;cin>>s;
    map<char,int>mp;
    for(auto x:s){
        mp[x]++;
        if(x>='a' && x<='z'){
            if(mp[x-32]>0){
                ans++;
                mp[x]--;
                mp[x-32]--;
            }
        }else{
            if(mp[x+32]>0){
                ans++;
                mp[x]--;
                mp[x+32]--;
            }
        }
    }
    for(auto x:s){
        if(k>0){
            if(mp[x]>=2){
                k--;
                ans++;
                mp[x]-=2;
            }
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