#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;int a[n],maxi=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<i+1<<" ";
        int temp=log2(a[i]-0.5)+1;
        cout<<((int)pow(2,temp)-a[i])<<endl;
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