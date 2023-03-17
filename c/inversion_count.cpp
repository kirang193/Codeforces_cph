#include <iostream>
using namespace std;
int inversion_count(int a[],int ar_sz){
    // n -> Array(a) size
    // Time complexity Analysis             //    Cost times
    int cnt=0;                              //      c1  1
    for(int i=0;i<ar_sz;i++){               //      c2  n+1
        for(int j=i+1;j<ar_sz;j++){         //      c3  ∑_(i=0 to n-1)_(n-i)
            if(a[i]>a[j])cnt++; }}          //      c4  ∑_(i=0 to n-1)_(n-i-1)
    return cnt;                             //      c5  1
}
// Running Time Analysis:
// Number of inversions in array = Number of swaps done in bubble sort
// So using bubble sort implementation, number of inversions are calculated.
// T(n) = (c1+c5).1 + c2.(n+1) + c3.(n.(n-1)/2) 
// T(n) is of form an^2 + bn + c=> Quadratic => O(n^2).
// Comparisions ~ n^2/2, exchanges ~ n^2/2
// So here, time complexity of worst, best & average cases = O(n^2)
// For best case, if we use modified(better version using flag),
// we can get to O(n) complexity.
void solve(){
    int a[]={2,4,1,3,5};
    int n =sizeof(a)/sizeof(a[0]);
    int inv_cnt = inversion_count(a,n);
    cout<<"INPUT:\n arr[] = ";
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
    cout<<"OUTPUT: ";
    cout<<inv_cnt<<endl;
}
int main()
{ 
    solve();
    return 0;
}
