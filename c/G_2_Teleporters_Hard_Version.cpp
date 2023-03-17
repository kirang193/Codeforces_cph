#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,c,x;cin>>n>>c;

    vector<int>a(n),b(n),p;
    for(int i=0;i<n;i++){
        cin>>x;
        a[i]=i+1+x;
        b[i]=n-i+x;
    }
    
    p.push_back(*min_element(a.begin(),a.end()));
    for(int i=0;i<n;i++){
        // if(index == i)continue;
        p.push_back(min(a[i],b[i]));
    }
    sort(p.begin()+1,p.end());
    // for(auto x:p)cout<<x<<" ";
    // cout<<endl;
    int sum=0,ans=0;
    for(int i=0;i<n;i++){
        sum+=p[i];
        if(sum<=c)ans++;
        else break;
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