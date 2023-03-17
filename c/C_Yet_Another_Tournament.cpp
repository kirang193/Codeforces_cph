#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,m;cin>>n>>m;
    vector<int>a(n),a_;
    for(int i=0;i<n;i++)cin>>a[i];
    a_ = a;
    sort(a_.begin(),a_.end());
    // 1 100 100 200
    int m_ = m, last_win_cost=0, wins = 0;
    for(int i=0;i<n;i++){
        if(m_<a_[i])break;
        else{
            last_win_cost = a_[i];
            m_-= a_[i];
            wins++;
        }
    }
    if(wins==n){cout<<1<<endl;return;}
    //cout<<wins<<" ";
    if(m_+last_win_cost>=a[wins])(cout<<(n-wins))<<endl;
    else cout<<(n-wins+1)<<endl;


}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}