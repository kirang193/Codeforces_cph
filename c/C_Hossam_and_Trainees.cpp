#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e5+5;
vector<int>isprime(N,1);
vector<int>sprimes;

void sieve(){
    isprime[0]=isprime[1]=0;
    for(int i=2;i*i<N;i++){
        if(isprime[i]){
            sprimes.push_back(i);
            for(int j=i*i;j<N;j+=i)
                isprime[j]=0;
        }
    }
}
void solve(){
    int n;cin>>n;
    int a[n];
    set<int>s;s.insert(-1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int x = a[i];
        if(x<N && isprime[N]==1){
            
        }
    }
    cout<<"NO\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    sieve();
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}