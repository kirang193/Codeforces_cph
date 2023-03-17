#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    //ok ->10 not ok->01 
    int n;string s;cin>>n>>s;bool ok=0;
    if(s[0]=='1')ok=1;
    for(int i=1;i<n;i++){
        if(s[i]=='1'){
            cout<<(ok?'-':'+');
            ok=1-ok;
        }else{cout<<'+';}
    }
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