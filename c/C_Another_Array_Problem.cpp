#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;int a[n];
    int sum=0;
    int maxi=-1,mini=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }
    if(n>=4)cout<<maxi*n<<"\n";
    else if(n==2){cout<<max(a[0]+a[1],2*abs(a[0]-a[1]))<<endl;}
    else{
        if(maxi==a[0]||maxi==a[2])cout<<3*maxi<<endl;
        else{
            maxi=a[0]+a[1]+a[2];
            maxi=max(maxi,3*abs(a[0]-a[1]));
            maxi=max(maxi,3*abs(a[1]-a[2]));
            maxi=max(maxi,3*a[0]);
            maxi=max(maxi,3*a[2]);
            cout<<maxi<<endl;
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