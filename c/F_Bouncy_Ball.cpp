#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,i1,j1,i2,j2;string s;cin>>n>>m>>i1>>j1>>i2>>j2>>s;
    int temp_i = i1, temp_j = j1;
    int dx,dy;
    if(s[0] == 'D')dx=1;
    else dx = -1;
    if(s[1] == 'R')dy = 1;
    else dy = -1;
    if(i1==i2 && j1==j2){
        cout<<0<<endl;return;
    }
    int bounces=0;
    int iters = 0;
    while(1){
        
        if(temp_i == i2 && temp_j == j2){
            cout<<bounces<<endl;
            return;
        }
        bool flag=0;
        if((dx == 1 && temp_i == n)||(dx == -1 && temp_i == 1)){
            flag=1;
            dx = -dx;
        }
        if((dy == 1 && temp_j == m)||(dy == -1 && temp_j == 1)){
            flag=1;
            dy = -dy;
        }
        if(flag)bounces++;
        temp_i += dx, temp_j += dy;
        // cout<<temp_i<<" "<<temp_j<<endl;
        // if(temp_i == i1 && temp_j == j1){
        //     cout<<"-1\n";return;
        // }
        iters++;
        if(iters>50000)break;
    }
    cout<<"-1\n";
    
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}