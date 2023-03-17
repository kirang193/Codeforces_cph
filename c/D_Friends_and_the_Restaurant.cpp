#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    int a[n],b[n];vector<int>diff;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){cin>>b[i];diff.push_back(b[i]-a[i]);}
    sort(diff.begin(),diff.end());
    int l=0,r=n-1,ans=0;
    // for(auto x:diff)cout<<x<<" ";
    // cout<<endl;
    while(l<r){
        if(diff[l]+diff[r]>=0){ans++;r--;}
        l++;
        
    }
    cout<<ans<<endl;

}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}