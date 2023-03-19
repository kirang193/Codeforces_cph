#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;string s;cin>>n>>s;
    map<char,int>mp;
    for(int i=0;i<n;i++){
        if(mp[s[i]]==0)mp[s[i]]=i+1;
        else{
            //cout<<i<<mp[s[i]]<<endl;
            if((i+1-mp[s[i]])%2){
                cout<<"NO\n";
                return;
            }
        }
        
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