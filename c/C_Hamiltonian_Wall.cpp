#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,i;string s1,s2;cin>>n>>s1>>s2;
    bool flag=0;
    for(i=0;i<n;i++){
        if(s1[i]=='W'&&s2[i]=='B'){
            flag=0;break;
        }else if(s2[i]=='W'&& s1[i]=='B'){
            flag=1;break;
        }
    }
    for(int j=i+1;j<n;j++){
        if(s1[j]=='W'&&s2[j]=='B'){
            if(flag){
                if((j-i)%2){
                    cout<<"NO\n";return;
                }else{
                    i=j;flag=0;
                }
            }else{
                if((j-i)%2){
                    i=j;
                }else{
                    cout<<"NO\n";return;
                }
            }
        }else if(s2[j]=='W'&& s1[j]=='B'){
            if(flag){
                if((j-i)%2){
                    i=j;
                }else{
                    cout<<"NO\n";return;
                }
            }else{
                if((j-i)%2){
                    cout<<"NO\n";return;
                }else{
                    i=j;flag=1;
                }
            }
        }
    }
    cout<<"YES\n";
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)solve();
    return 0;
}