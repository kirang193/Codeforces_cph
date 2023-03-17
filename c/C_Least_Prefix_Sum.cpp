#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,m;cin>>n>>m;m--;
    int a[n],p[n];for(int i=0;i<n;i++)cin>>a[i];
    p[0]=a[0];
    for(int i=1;i<n;i++){
        p[i]=p[i-1]+a[i];
    }
    priority_queue<int>pq;int count=0;
    int p_Copy=p[m];
    for(int i=m;i>=0;i--){
            while(p[m]>p[i]){
                count++;
                p[m]-=2LL*pq.top();
                pq.pop();
            }
            // while(!pq.empty())pq.pop();
        pq.push(a[i]);
    }
    p[m]=p_Copy;
    priority_queue<int, vector<int>, greater<int>> pq2;
    for(int i=m+1;i<n;i++){
        pq2.push(a[i]);
        while(p[m]>p[i]){
                count++;
                p[m]=p[m]+2LL*pq2.top();
                pq2.pop();
        }
            // while(!pq2.empty())pq2.pop();
    }
    cout<<count<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}