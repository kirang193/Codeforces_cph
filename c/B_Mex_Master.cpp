#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;int a[n];int one=0,zero=0,notznoto=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0)zero++;
        else if(a[i]==1)one++;
        else notznoto++;
    }
    if(zero<=(n+1)/2){cout<<0<<endl;}
    else if(zero == n || notznoto !=0){
        // there is some element other than 0 and 1
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
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