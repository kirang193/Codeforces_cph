#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mini=min(a,b);int maxi=max(a,b);
    mini=min(mini,c);mini=min(mini,d);
    maxi=max(maxi,c);maxi=max(maxi,d);
    if((mini==a&&maxi==d)||(mini==d&&maxi==a)||(mini==b && maxi==c)||(mini==c&&maxi==b))cout<<"YES\n";
    else cout<<"NO\n";

}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}