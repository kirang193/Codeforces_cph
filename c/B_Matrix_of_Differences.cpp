#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pa {v[i][j]=a;a++;}
#define pb {v[i][j]=b;b--;}
void solve(){
   int n;cin>>n;
   int a=1,b=n*n;
   int v[n][n];
   for(int i=0;i<n;i++){
        if(i%2){
            for(int j=n-1;j>=0;j--)
                if((i+j)%2){
                    pb;
                }else{
                    pa;
                }
            for(int j=0;j<n;j++)cout<<v[i][j]<<" ";
            cout<<endl;
           
        }else{
            for(int j=0;j<n;j++)
                if((i+j)%2){
                    cout<<b<<" ";b--;
                }else{
                    cout<<a<<" ";a++;
                }
            cout<<endl;
        }
   }
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}