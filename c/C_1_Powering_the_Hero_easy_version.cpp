#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;int ans=0;
    int a[n];priority_queue<int>pq;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]!=0)pq.push(a[i]);
        else {
            if(!pq.empty()){
                 ans+=pq.top();
                pq.pop();
            }
           
        }
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