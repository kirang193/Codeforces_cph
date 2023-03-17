#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;string s;cin>>s;int ans=-1;
    for(int i=0;i<n-1;i++){
        if(s[i]=='L'&&s[i+1]=='R'){ans=i+1;}
        if(s[i]=='R'&&s[i+1]=='L'){cout<<0<<endl;return;}
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