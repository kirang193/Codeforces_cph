#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k,i;cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)cin>>v[i].first;
    for(int i=0;i<n;i++)cin>>v[i].second;
    sort(v.begin(),v.end(),[](auto& x, auto& y){return x.first+x.second<y.first+y.second;});
    int sum=0;
    for(i=0;i<n;i++){
        sum+=(v[i].first+v[i].second);
        if(sum==k){cout<<i+1<<endl;return;}
        if(sum>k)break;
    }
    //if(i==0){cout<<0<<endl;return;}
    if(i==n){cout<<n<<endl;return;}
    sum-=(v[i].first+v[i].second);
    i--;
    //if(sum==k){cout<<i+1<<endl;return;}
    //if(sum=k){cout<<n<<endl;return;}
    for(int j=i+1;j<n;j++){
        if(v[j].first+sum<=k){i++;break;}
    }
    cout<<i+1<<endl;
}
int32_t main()
{ 
        ios_base::sync_with_stdio(false);cin.tie(NULL);
        int t;
        cin>>t;
        while (t--)solve();
        return 0;
}