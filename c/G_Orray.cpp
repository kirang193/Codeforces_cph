#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int>ans;
    sort(v.begin(),v.end());
    ans.push_back(v[n-1]);
    v[n-1]=-1;
    int maxele = ans[0];
    for(int i=0;i<min(32,n-1);i++){
        int temp = maxele, index =-1;
        for(int j=n-1;j>=0;j--){
            if(v[j]==-1)continue;
            int poss = maxele|v[j];
            
            if(poss>temp){
                //cout<<poss<<" ";
                index = j;
                temp = maxele|v[j];
            }
        }
        if(index!=-1){
            maxele|=temp;
            ans.push_back(v[index]);
            v[index]=-1;
        }
    }
    for(auto x:v)
        if(x!=-1)ans.push_back(x);
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
    
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}