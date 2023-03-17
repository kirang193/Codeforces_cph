#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    bool parity = 0;
    int a =0, b= 0;
    int temp = n;
    int power = 1;
    while(temp>0){
        int k = temp%10;
        if(k%2){
            if(parity){
                a+=(k/2+1)*power;
                b+=(k/2)*power;
                parity=0;
            }else{
                a+=(k/2)*power;
                b+=(k/2+1)*power;
                parity=1;
            }
        }else{
            a+=(k/2)*power;
            b+=(k/2)*power;
        }
        temp/=10;
        power*=10;
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