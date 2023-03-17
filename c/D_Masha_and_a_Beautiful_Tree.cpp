#include <bits/stdc++.h>
using namespace std;
#define int long long int
int n;
int v[262144];

int solve2(int l,int r){
    if(r-l==1)return 0;
    int m=(l+r)/2,ans=0;
    int max1=*max_element(v+l,v+m);
    int max2=*max_element(v+m,v+r);
    if(max1>max2){
        ans++;
        for(int i=0;i<m-l;i++){
            swap(v[l+i],v[m+i]);
        }
    }
    return ans+solve2(l,m)+solve2(m,r);
}
void solve(){
    cin>>n;
    for(int i=0;i<n;i++){cin>>v[i];}
    int ans = solve2(0,n);
    if(is_sorted(v,v+n)){cout<<ans<<endl;return;}
    else{cout<<"-1\n";return;}
    
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}