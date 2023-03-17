#include <bits/stdc++.h>
using namespace std;
#define int long long int
int count_inv(int a[],int n){
    int zeroes=0,inv=0;
    for(int i = n-1;i>=0;i--){
        if(a[i]==0)zeroes++;
        else inv+=zeroes;
    }
    return inv;
}
void solve(){
    int n;cin>>n;
    int a[n],ans = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ans = max(ans, count_inv(a,n));
    for(int i=0;i<n;i++){
        if(a[i]==0){
            a[i]=1;
            ans = max(ans, count_inv(a,n));
            a[i]=0;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==1){
            a[i]=0;
            ans = max(ans, count_inv(a,n));
            a[i]=1;
            break;
        }
    }
    cout<<ans<<endl;
    

}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}