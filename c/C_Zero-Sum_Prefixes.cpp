#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;int a[n],ans=0;vector<int>zeroes;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
        if(a[i]==0)zeroes.push_back(i);
    int z=zeroes.size();
    if(z==0){
        map<int,int>m;int sum=0;
        int max_count=0;
        for(int j=0;j<n;j++){
            sum+=a[j];
            if(sum==0)ans++;
        }
        cout<<ans<<endl;return;
    }
    if(z==1){
        map<int,int>m;int sum=0;
        int max_count=0;
        for(int j=zeroes[0];j<n;j++){
            sum+=a[j];
            m[sum]++;
            max_count=max(max_count,m[sum]);
        }
        ans+=max_count;
        cout<<ans<<endl;return;
    }
    for(int i=0;i<zeroes.size()-1;i++){
        int s=zeroes[i];int e=zeroes[i+1];
        map<int,int>m;int sum=0;
        int max_count=0;
        for(int j=s+1;j<e;j++){
            sum+=a[j];
            m[sum]++;
            max_count=max(max_count,m[sum]);
        }
        if(sum==0LL)ans++;
        ans+=max_count;
    }
    cout<<ans+1<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}