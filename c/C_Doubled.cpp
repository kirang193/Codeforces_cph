#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    string s;cin>>s;
    int len = s.length();
    int ans = 0;
    for(int i=2;i<len;i+=2){
        ans += 9*pow(10,(i-2)/2);
    }
    int mini = pow(10,len-1);
    for(int i=mini;i<=)
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}