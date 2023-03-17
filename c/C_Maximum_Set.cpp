#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int a,b;
    cin>>a>>b;
    int temp = b, len = 0;
    while(temp>=a){
        temp/=2;
        len++;
    }
    
    cout<<len<<" "<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}