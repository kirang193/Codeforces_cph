#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int count = (a[0]==0?0:1);
    for(int i=0;i<n-1;i++){
        if(a[i]<=i&&a[i+1]>(i+1))count++;
    }
    cout<<count+1<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}