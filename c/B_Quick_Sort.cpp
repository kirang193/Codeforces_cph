#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k,i;cin>>n>>k;int a[n],max_subseq_with_1=1;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++)if(a[i]==1)break;
    int temp=2;
    for(i=i+1;i<n;i++){
        if(a[i]==temp){max_subseq_with_1++;temp++;}
    }
    cout<<((n-max_subseq_with_1)+k-1)/k<<endl;

}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}