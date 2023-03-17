#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int xorr,andd;//a^b,a&b
    cin>>xorr;
    if(xorr%2){cout<<"-1\n";return;};
    //a^b = (a+b)/2 => 2*a^b = (a^b+2a&b) => a&b = (a^b)/2
    andd = xorr/2;
    //  a^b(X) a&b(Y)   a   b
    //  0       0       0   0
    //  0       1       1   1
    //  1       0       0   1  (can be 1 0)
    //  1       1       -1  -1  (not possible)
    int a = 0, b = 0;
    for(int i=31;i>=0;i--){
        int temp = (1<<i);
        int X = xorr&temp, Y = andd&temp;
        if(X==0){
            a|=Y;
            b|=Y;
        }else if(Y==0){
            b|=X;
        }else{
            cout<<"-1\n";return;
        }
    }
    cout<<a<<" "<<b<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}