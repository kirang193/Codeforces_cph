#include <bits/stdc++.h>
using namespace std;
#define int long long int
int ans=0;
int n=8;
vector<vector<bool>>board(n,vector<bool>(n,0));
vector<bool>left_diagonal(2*n-1,0),right_diagonal(2*n-1,0),row(n,0);
vector<vector<int>>solutions;
void printBoard(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<board[i][j]<<" ";
        cout<<endl;
    };  return;
}
bool isSafe(int row, int col){

}
bool NQueens(int col){
    if(col==n){
        ans++;
        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1)v.push_back(j);
            }
        }
        solutions.push_back(v);
        return true;
    }
    bool exists = false;
    for(int i=0;i<n;i++){
        if(isSafe(i,col)){
            board[i][col]=1;
            row[i]=1;
            left_diagonal[]
            exists = exists || NQueens(col+1);

            board[i][col]=0;
        }
    }
    return res;

}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    vector<vector<int>>solutions=NQueens(0);
    return 0;
}