#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,m,k;cin>>n>>m>>k;int a[k+1],current=k,rem_spaces=n*m-2;
    bool vis[k+1];
    for(int i=1;i<=k;i++){cin>>a[i];vis[i]=0;}
    for(int i=1;i<=k;i++){
        vis[a[i]]=1;
        if(a[i]==current){
            //cout<<rem_spaces<<" ";
            if(rem_spaces>=2){
                current--;
                if(current==0){cout<<"YA\n";return;}
                while(vis[current]){
                    current--;
                    rem_spaces++;
                }
            }else{
                cout<<"TIDAK\n";return;
            }
        }else{
            rem_spaces--;
        }
    }
    cout<<"YA\n";
    
       
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}