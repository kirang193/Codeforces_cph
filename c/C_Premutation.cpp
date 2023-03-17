#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    int a[n][n-1];
    map<int,int>mp;
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
        {
            cin>>a[i][j];
            if(j==0)
                mp[a[i][j]]++;
        }
    int sec = 0,first=0;
    for(auto x:mp)
        if(x.second==1)
            {sec=x.first;break;}
    for(int i=0;i<n;i++)
        if(a[i][0]!=sec){
            cout<<a[i][0]<<" ";break;
        }
    int index = 0;
    for(int i=0;i<n;i++)
        if(a[i][0]==sec)
            {
                index = i;break;
            }
    for(int i=0;i<n-1;i++){
        cout<<a[index][i]<<" ";
    }
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