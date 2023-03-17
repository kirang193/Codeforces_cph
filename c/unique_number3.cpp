#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    //cout<<1;
    int n;
    cin>>n;int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    vector<int>bits(32,0);
    for(int i=0;i<n;i++){
        int temp=a[i];
        int k=0;
        while(temp>0){
            bits[k]+=(temp&1);
            k++;
            temp>>=1;
        }
    }
    int ans=0;
    for(int i=0;i<32;i++){
        //cout<<bits[i]<<' ';
        if(bits[i]%3)ans+=(1<<i);
    }
    cout<<ans;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}