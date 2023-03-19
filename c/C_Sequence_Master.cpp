#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    int a[2*n],ans=0;
    for(int i=0;i<2*n;i++){
        cin>>a[i];
        ans+=abs(a[i]);
    }
    // 1 1 2 2 
    //-1 -1 -1 2
    sort(a,a+2*n);
    if(n==1){cout<<(a[1]-a[0])<<endl;return;}
    else if(n==2){
        int temp=0;
        for(int i=0;i<2*n;i++)
            temp+=abs(a[i]-2);
        ans = min(ans,temp);
    }
    //cout<<"x"<<ans<<endl;
    if(n%2==0){
        int temp = 0;
        for(int i=0;i<2*n-1;i++)
            temp+=abs(a[i]+1);
        temp+=abs(a[2*n-1]-n);
        ans = min(ans,temp);
        cout<<ans<<endl;
    }else{
        cout<<ans<<endl;
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