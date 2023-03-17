#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    vector<int>bits[n];int x;
    int k[n];
    //bool flag=1;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>k[i];
        for(int j=0;j<k[i];j++){
            cin>>x;
            bits[i].push_back(x);
            mp[x]++;
        }
    }

    for(int i=0;i<n;i++){
        bool flag=1;
        for(int j=0;j<k[i];j++){
            if(mp[bits[i][j]]==1){flag=0;break;}
        }
        if(flag==1){cout<<"Yes\n";return;}
    }
    cout<<"No\n";
    return;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}