#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    n--;
    int alice = 1, bob =0;
    int k=2;
    bool flag=1;//0-al,1-bob
    while(n>=k){
        if(flag){
            n-=k;
            bob+=k;
            k++;
            if(n>=k)
                {
                    bob+=k;n-=k;
                    k++;
                    flag=0;
                }
            
            continue;
        }
        n-=k;
        alice+=k;
        k++;
        if(n>=k){
            alice+=k;
            n-=k;
            k++;
            flag=1;
        }
        
    }
    if(flag){
        bob+=n;
    }else{
        alice+=n;
    }
    // cout<<flag<<" "<<n<<endl;
    cout<<alice<<" "<<bob<<endl;
    // cout<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}