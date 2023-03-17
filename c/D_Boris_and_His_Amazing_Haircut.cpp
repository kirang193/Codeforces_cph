#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int m,razor;cin>>m;
    map<int,int>razors;
    for(int i=0;i<m;i++){
        cin>>razor;
        razors[razor]++;
    }
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){cout<<"NO\n";return;}
    }
    stack<int>raz_stack;
    raz_stack.push(INT_MAX);
    for(int i=0;i<n;i++){
        while(raz_stack.size()>0 && raz_stack.top()<b[i])raz_stack.pop();
        if(a[i]==b[i] || (raz_stack.top()==b[i]))continue;
        if(razors[b[i]]==0){cout<<"NO\n";return;}
        razors[b[i]]--;
        raz_stack.push(b[i]);
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