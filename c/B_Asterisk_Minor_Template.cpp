#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    string a,b;
    cin>>a>>b;
    int a_len = a.size(), b_len = b.size();
    if(a[0]==b[0]){cout<<a[0]<<"*"<<endl;return;}
    if(a[a_len-1]==b[b_len-1]){cout<<"*"<<a[a_len-1]<<endl;return;}
    int k=-1;
    for(int i=0;i<a_len-1;i++){
        for(int j=0;j<b_len-1;j++){
            if(a.substr(i,2)==b.substr(j,2)){cout<<"YES\n";cout<<'*'<<a.substr(i,2)<<'*'<<endl;return;}
        }
    }
    cout<<"NO\n";

}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}