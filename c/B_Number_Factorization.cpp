#include <bits/stdc++.h>
using namespace std;
// #define int long long int
void solve(){
    vector<int>coins = {1,2,3};
    vector<int>dp(100,0);
    dp[0]=1;
    for(int i=1;i<100;i++){
        for(auto coin:coins){
            if(i-coin>=0)
            dp[i] += dp[i-coin];
            dp[i] %= 1000000007;
        }
    }

    for(int i=0;i<100;i++)cout<<i<<" "<<dp[i]<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}