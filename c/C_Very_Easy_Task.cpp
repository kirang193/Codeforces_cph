// Problem-1 a)
#include <bits/stdc++.h>
using namespace std;
void solve(int n, int m){
    //T(n-1,m)+T(n,m-1)
    solve(n-1,m);
    solve(n,m-1);
    // O(1)
    int const_operation = 1 + 2;
}
int main(){
    int n,m;
    solve(n,m);
}
// Problem-1 b)
#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    // 3T(n/2)
    solve(n/2);
    solve(n/2);
    solve(n/2);
    // O(n) operation
    for(int i=1;i<=n;i++);
}
int main(){
    int n;
    solve(n);
}
// Problem-1 c)
#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    //nT(n-1)
    for(int i=1;i<=n;i++)
        solve(n-1);
    
    // O(n^2) operation
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++);
}
int main(){
    int n;
    solve(n);
}
