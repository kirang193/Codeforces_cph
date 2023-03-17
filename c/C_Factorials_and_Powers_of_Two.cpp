#include <bits/stdc++.h>
using namespace std;
#define int long long int
const long long MAXN = 10e12;
int bit_count(int n){
    return __builtin_popcountll(n);
}
int first_bit(int n){
    return 63 - __builtin_clzll(n);
}
void solve(){
    int n;cin>>n;
    vector<int>fact;
    int factorial = 6, next = 4;
    while(factorial<=MAXN){
        fact.push_back(factorial);
        factorial*=next;
        next++;
    }
            //sum count                mask
    vector<pair<int,int>>fact_sum_mask(1<<(fact.size()));
    fact_sum_mask[0]={0,0};// mask 0 -> sum 0 count 0;
    for(int mask=1;mask<(1<<fact.size());mask++){
        int firstBit = first_bit(mask);
        fact_sum_mask[mask].first = fact_sum_mask[mask^(1<<firstBit)].first+fact[firstBit];
        fact_sum_mask[mask].second = bit_count(mask);
    }
    int ans = bit_count(n);// all bits -> power of two
    for(auto x:fact_sum_mask){
        if(x.first<=n)
            ans = min(ans, x.second + bit_count(n-x.first));
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