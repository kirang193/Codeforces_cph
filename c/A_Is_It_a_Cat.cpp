#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,i;cin>>n;string s;
    cin>>s;bool flag1=0,flag2=0,flag3=0,flag4=0;
    for(i=0;i<n;i++){
        if(s[i]=='m'||s[i]=='M')flag1=1;
        else break;
    }
    for(i;i<n;i++){
        if(s[i]=='e'||s[i]=='E')flag2=1;
        else break;
    }
    for(i;i<n;i++){
        if(s[i]=='o'||s[i]=='O')flag3=1;
        else break;
    }
    for(i;i<n;i++){
        if(s[i]=='w'||s[i]=='W')flag4=1;
        else break;
    }
    if(flag1&&flag2&&flag3&&flag4 && i==n){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}