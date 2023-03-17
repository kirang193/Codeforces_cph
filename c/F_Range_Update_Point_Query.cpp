#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,q,p,l,r,x;cin>>n>>q;
    vector<int>a(n);vector<bool>single(n,0);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(q--){
        cin>>p;

        if(p==2){
            cin>>x;
            cout<<a[x-1]<<endl;continue;
        }
        if(mp.size()==n)continue;
        for(int i=l;i<=r;i++){
            if(single[i])continue;
            else{
                int temp = a[i],temp2=0;
                while(temp>0){
                    temp2+=temp%10;
                    temp/=10;
                }
                a[i]=temp2;
                if(a[i]<10){
                    single[i]=true;
                    mp[i]++;
                }
            }
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