#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    string s;int a=0,b=0;cin>>s;
    if(s.size()==1){cout<<(s[0]-'0'-1)<<endl;return;}
    int pow10 = 1;
    for(int i=s.size()-1;i>=0;i-=2){
        a+= pow10*(s[i]-'0');
        pow10*=10;
    }
    pow10 = 1;
    for(int i=s.size()-2;i>=0;i-=2){
        b+= pow10*(s[i]-'0');
        pow10*=10;
    }
    
    cout<<((a+1)*(b+1)-2)<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}