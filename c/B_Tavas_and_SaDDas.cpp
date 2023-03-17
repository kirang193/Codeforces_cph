#include <bits/stdc++.h>
using namespace std;
void recursion(string s, int ptr){
    if(ptr == s.length())return;
    cout<<(s[ptr]-'\0'-64);
    recursion(s, ptr+1);
}
void solve(){
    string s;cin>>s;
    recursion(s,0);
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}

/* T.C: O(n) */