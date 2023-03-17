#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    int a[n],od=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]%2)od++;
    }
    if(od%2){
        int min_operations=INT_MAX;
        for(int i=0;i<n;i++){
            int temp=a[i];
            int parity=a[i]%2;
            int operations = 0;
            while(temp%2!=(1-parity)){
                temp/=2;
                operations++;
            }
            min_operations=min(min_operations,operations);
        }
        cout<<min_operations<<endl;

    }else{
        cout<<"0\n";
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