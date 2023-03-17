#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    string s;cin>>s;int n=s.length(),i;bool flag=0;
    if(s[0]==s[n-1]||s[1]=='b')cout<<s[0]<<" "<<s.substr(1,n-2)<<" "<<s[n-1]<<endl;
    else{
        if(s[0]=='a'){
            for(i=1;i<n-1;i++){
             if(s[i]=='b'){
                cout<<s.substr(0,i)<<" "<<s.substr(i,n-i-1)<<" "<<"b"<<endl;return;}
            }
            cout<<s.substr(0,i-1)<<" "<<s[i-1]<<" "<<"b"<<endl;}
        else if(s[0]=='b'){
            for(i=1;i<n-1;i++){
             if(s[i]=='a'){
                cout<<s.substr(0,i)<<" "<<s[i]<<" "<<s.substr(i+1)<<endl;return;}
            }
            cout<<s.substr(0,i-1)<<" "<<s[i-1]<<" "<<"a"<<endl;
        }
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