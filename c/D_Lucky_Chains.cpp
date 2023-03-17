#include <bits/stdc++.h>
using namespace std;
#define int long long int
int leastPrime[(int)1e7+1];
vector<int>checkies;
void least_prime_sieve(int n){
    leastPrime[1]=1;
    for(int i=2;i<=n;i++){
        if(leastPrime[i]==0){
            leastPrime[i]=i;
            for(int j=i*i;j<=n;j+=i){
                if(leastPrime[j]==0)
                leastPrime[j]=i;
            }
        }
    }
}
void factorize(int n){
        checkies={};
        while(n>1){
            int factor = leastPrime[n];
            while(n%factor==0)n/=factor;
            checkies.push_back(factor);
        }
}
void solve(){
    int a,b;
    cin>>a>>b;
    int x=__gcd(a,b);
    if(x!=1){cout<<"0\n";return;}
    if(abs(a-b)==1){cout<<"-1\n";return;}
    if(a>b)swap(a,b);
    int temp = b-a;
    factorize(temp);
    int k=INT_MAX;
    for(auto x:checkies){
        k=min(k,x-a%x);
    }
    cout<<k<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    least_prime_sieve((int)1e7);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}