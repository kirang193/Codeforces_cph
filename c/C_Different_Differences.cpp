#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k;cin>>k>>n;vector<int>sol;
    sol.push_back(1);
    int p=n-k,temp=0;
    for(int i=0; temp<=p && sol.size()<k; i++){
        p-=temp;
        temp++;
        sol.push_back(temp+sol.back());
    }
    while(sol.size()<k){
        sol.push_back(sol.back()+1);
    }
    //cout<<p<<temp<<" ";
    for(auto x:sol)cout<<x<<" ";
    cout<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}