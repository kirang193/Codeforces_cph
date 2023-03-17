#include <iostream>
using namespace std;
int bubble_sort(int a[],int ar_sz){
    // n -> Array(a) size
    // Time complexity Analysis             //    Cost times
    int swaps=0;                            //     c1   1
    for(int i=0;i<ar_sz;i++){               //     c2   n+1
        for(int j=i+1;j<ar_sz;j++){         //     c3   ∑_(i=0 to n-1)_(n-i)
            if(a[i]>a[j]){                  //     c4   ∑_(i=0 to n-1)_(n-i-1)
                swaps++;                    //     c5   ∑_(i=0 to n-1)_Ti
                int temp=a[j];              //     c6   ∑_(i=0 to n-1)_Ti
                a[j]=a[i];                  //     c7   ∑_(i=0 to n-1)_Ti
                a[i]=temp;}}}               //     c8   ∑_(i=0 to n-1)_Ti
    return swaps;                           //     c9   1
}
// Running Time Analysis:
// T(n) = (c1+c9).1 + c2.(n+1) + c3.(n.(n-1)/2) 
// T(n) is of form an^2 + bn + c=> Quadratic => O(n^2).
// Comparisions ~ n^2/2, exchanges ~ n^2/2
// So here, time complexity of worst, best & average cases = O(n^2)
// For best case, if we use modified(better version using flag),
// we can get to O(n) complexity.a
void solve(){
     int a[]={1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"INPUT: ";
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
    cout<<endl;
    int swaps = bubble_sort(a,n);
    cout<<"OUTPUT: ";
    cout<<swaps<<endl;
}
int main()
{ 
    solve();
    return 0;
}
