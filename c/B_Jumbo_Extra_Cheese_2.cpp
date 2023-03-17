#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,a,b;
    cin>>n;
    int p=0,maxi=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a>b)swap(a,b);
        p+=a;
        maxi=max(maxi,b);
    }
    cout<<2*(p+maxi)<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}