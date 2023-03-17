#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    string fb="";
    for(int i=1;i<=100;i++){
        if(i%3==0)fb.push_back('F');
        if(i%5==0)fb.push_back('B');
    }
    // int n;string s;cin>>n>>s;
    // for(int i=0;i<100-n;i++){
    //     if(fb.substr(i,n)==s){cout<<"YES\n";return;}
    // }
    cout<<fb<<endl;
    // cout<<"NO\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}