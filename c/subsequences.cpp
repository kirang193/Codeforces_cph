#include <bits/stdc++.h>
using namespace std;
int ans=0;
void recursion(int sum, int n){
    if(sum==n){ans+=1;}
    if(sum>n)return;
    recursion(sum+1,n);
    recursion(sum+3,n);
    return;
}
void solve(){
    int n;cin>>n;
    recursion(0,n);
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

/* T.C: Since the recursion function calls itself twice, time complexity is 2^n */