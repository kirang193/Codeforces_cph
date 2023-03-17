#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    int a[n];for(int i=0;i<n;i++)cin>>a[i];
    int maxi=1e9,mini=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){mini=max(mini,(a[i]+a[i+1]+1)/2);}
        else if(a[i]<a[i+1]){maxi=min(maxi,(a[i]+a[i+1])/2);}
    }
    if(maxi>=mini)cout<<mini<<endl;
    else cout<<"-1\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}