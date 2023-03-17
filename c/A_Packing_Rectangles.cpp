#include <bits/stdc++.h>
using namespace std;
#define int long long int
bool ok(int x, int w, int h, int n){
    return ((x/w)*(x/h)>=n);
}
void solve(){
    int w,h,n;cin>>w>>h>>n;
    int l = 0, r = 1;
    while(ok(r,w,h,n)!=true)r<<=1;
    while(r-l>1){
        int m = (l+r)>>1;
        if(!ok(m,w,h,n))l=m;
        else r=m;
    }
    cout<<r;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}