#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;string s;cin>>s;int i=0,j=0;
    for(int a=0;a<n;a++){
        if(s[a]=='U')j++;
        else if(s[a]=='R')i++;
        else if(s[a]=='D')j--;
        else if(s[a]=='L')i--;
        if(i==1 && j==1){
            cout<<"YES\n";
            return;
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