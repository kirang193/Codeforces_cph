#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;string s;cin>>n>>s;
    int ans=n,running_depth=0,depth=0;
    for(int i=0;i<2*n;i++){
        if(s[i]=='('){
            depth++;
            if(running_depth>=depth)ans--;
            running_depth=depth;
        }else depth--;
        
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