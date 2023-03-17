#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,m,x;cin>>n>>m;
    vector<int>a,b;
    for(int i=0;i<n;i++){cin>>x;a.push_back(x);}
    for(int i=0;i<m;i++){cin>>x;b.push_back(x);}
    for(int i=0;i<m;i++){
        int j=distance(begin(a),min_element(begin(a),end(a)));
        swap(a[j],b[i]);

    }int sum=0;
    for(int i=0;i<n;i++)sum+=a[i];
    cout<<sum<<endl;

}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}