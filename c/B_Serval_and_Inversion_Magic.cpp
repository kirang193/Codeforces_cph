#include <bits/stdc++.h>
using namespace std;
// #define int long long int
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    if(s[0]==s[n-1]){
        int l = 0, r = n-1;
        while(l<r){
            if(s[l]==s[r])l++,r--;
            else break;
        }
        while(l<r){
            if(s[l]!=s[r])l++,r--;
            else break;
        }
        while(l<r){
            if(s[l]==s[r])l++,r--;
            else break;
        }
        while(l<r){
            if(s[l]!=s[r]){cout<<"No\n";return;}
            l++,r--;
        }
        cout<<"Yes\n";return;
    }else{
        int l = 0, r = n-1;
        while(l<r){
            if(s[l]!=s[r])l++,r--;
            else break;
        }
        while(l<r){
            if(s[l]!=s[r]){
                cout<<"No\n";return;
            }
            l++,r--;
        }
        cout<<"Yes\n";return;
    }
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}