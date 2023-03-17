#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k;cin>>n>>k;
    string a,b;cin>>a>>b;
    map<char,int>mp1,mp2;
    for(int i=0;i<n;i++){
        mp1[a[i]]++,mp2[b[i]]++;
    }
    for(char i='a';i<='z';i++){
        if(mp1[i]!=mp2[i]){cout<<"NO\n";return;}
    }

    for(int i=0;i<n;i++){
        if(a[i]==b[i])continue;
        if(i+k>=n && i-k<0){cout<<"NO\n";return;}
    }
    cout<<"YES\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}