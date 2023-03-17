#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,sum=0,neg=0;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]<0)neg++;
    }
    
    for(int i=0;i<n;i++){
        a[i]=abs(a[i]);
        sum+=abs(a[i]);
    }
    int m = *min_element(a,a+n);
    if(neg%2!=0){
        sum =sum - 2*(*min_element(a,a+n));
    }
    cout<<sum<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}