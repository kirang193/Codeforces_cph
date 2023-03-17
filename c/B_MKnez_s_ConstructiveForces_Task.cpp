#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    if(n==3)cout<<"NO\n";
    else{
        if(n%2){
            int a=3-n,b=n-1;
            cout<<"YES\n";
            for(int i=0;i<n/2;i++)cout<<a<<" "<<b<<" ";
            cout<<a<<endl;
        }else{
            cout<<"YES\n";
            for(int i=0;i<n/2;i++)cout<<"-1 1 ";
            cout<<endl;
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