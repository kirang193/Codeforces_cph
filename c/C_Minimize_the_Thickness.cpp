#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];sum+=a[i];
    }
    int temp=0,temp2=0,len,ans=n;
    for(int i=0;i<n;i++){
        temp+=a[i];
        if(sum%temp==0){
            len=i+1;
            int start=i+1,temp2=0;
            for(int j=i+1;j<n;j++){
                temp2+=a[j];
                if(temp2==temp){
                    temp2=0;
                    len=max(len,j-start+1);
                    start=j+1;
                }else if(temp2>temp){
                    break;
                }
            }
            if(temp2==0){
                ans=min(ans,len);
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