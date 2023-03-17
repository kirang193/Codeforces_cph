#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k,splits=0,x;
    cin>>n;
    vector<int>v[n],v_all;
    map<int,int>m;

    for(int i=0;i<n;i++){
        cin>>k;
        while(k--){
            cin>>x;
            v_all.push_back(x);
            v[i].push_back(x);
        }
    }
    sort(v_all.begin(),v_all.end());
    // for(int i=0;i<v_all.size();i++)cout<<v_all[i]<<" ";
    // cout<<endl;
    for(int i=0;i<v_all.size();i++){
        m[v_all[i]]=i;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size()-1;j++){
            if((m[v[i][j+1]]-m[v[i][j]])!=1)splits++;
        }
    }
    cout<<splits<<" "<<(n+splits-1)<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}