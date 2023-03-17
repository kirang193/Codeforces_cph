#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    string s;cin>>s;
    int n = s.length();
    char a=s[0],b=s[n-1];
    vector<pair<char,int>>v;
    for(int i=0;i<n;i++){
        if(s[0]<=s[n-1]){
            if(s[i]<=s[n-1]&&s[i]>=s[0])v.push_back({s[i],i});
        }else{
            if(s[i]>=s[n-1]&&s[i]<=s[0])v.push_back({s[i],i});
        }
    }
    if(s[0]<=s[n-1]){
            sort(v.begin()+1,v.end()-1);
        }else{
            sort(v.begin()+1,v.end()-1,greater<pair<char,int>>());
    }
    cout<<abs(s[n-1]-s[0])<<" "<<v.size()<<endl;
    for(auto x:v){
        cout<<(x.second+1)<<" ";
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