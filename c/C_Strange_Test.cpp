#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int a,b;cin>>a>>b;
    int ans=INT_MAX;
    if((a|b)==b){cout<<1<<endl;return;}
    else{
        for(int i=1;i<b-a;i++){
            if((a+i|b)==b){ans=i+1;break;}
        }
        for(int i=1;i<b;i++){
            if((b+i|a)==b+i){ans=min(ans,i+1);break;}
        }
    }
    cout<<min(b-a,ans)<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}