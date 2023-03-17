#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,q,l,r;
    cin>>n>>q;
    vector<int> a(n+1),prefix_sum(n+1),prefix_xor(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        prefix_sum[i]=prefix_sum[i-1]+a[i];
        prefix_xor[i]=prefix_xor[i-1]^a[i];
    }
    cin>>l>>r;
    // for(auto x:prefix_sum)cout<<x<<" ";cout<<endl;
    // for(auto x:prefix_xor)cout<<x<<" ";cout<<endl;
    int total_sum=prefix_sum[n],total_xor=prefix_xor[n];
    //cout<<total_sum<<" "<<total_xor<<endl;
    int best_f = total_sum-total_xor;
    int ansL = 1, ansR = n;
    while(l<=r){
        int sz = (l+r)/2;
        bool flag = 0;
        for(int i=1;i<=(n-sz+1);i++){
            if((prefix_sum[i+sz-1]-prefix_sum[i-1]-(prefix_xor[i+sz-1]^prefix_xor[i-1]))==best_f){
                flag=1;
                ansL = i;
                ansR = i+sz-1;
                break;
            }
        }
        if(flag)r = sz-1;
        else l = sz+1;
    }
    cout<<ansL<<" "<<ansR<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}