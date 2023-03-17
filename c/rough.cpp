                                            // G Kiran Kumar
                                            //21075031
#include <iostream>
using namespace std;
int insertion_sort(int a[],int ar_sz){
    // n -> Array(a) size
    // Time complexity Analysis   //    Cost times
    int swaps=0;                  //     c1   1
    for(int j=1;j<ar_sz;j++){     //     c2   n
        int key=a[j], i=j-1;      //     c3   1
        while(i>=0 && a[i]>key){  //     c4   ∑_(j=1 to n-1)_(Tj)
            swaps++;              //     c5   ∑_(j=1 to n-1)_(Tj-1)
            a[i+1]=a[i];          //     c6   ∑_(j=1 to n-1)_(Tj-1)
            i--;   }              //     c7   ∑_(j=1 to n-1)_(Tj-1)
        a[i+1]=key;}              //     c8   n-1
    return swaps;                 //     c9   1
}
// Best Case Analysis:
// When Array is already sorted in increasing order,
// while loop is not iterated.
// T(n) = (c1+c3+c9).1 + c2.n + c4.(n-1) + c8.(n-1) + c9.1
// T(n) is of form an+b => Linear for Best case O(n)
// Worst Case Analysis:
// When Array is sorted in reverse order.
// while loop is iterated, Tj = j+1
// T(n) = (c1+c3+c9).1 + c2.(n) + c4.(n.(n+1)/2) + (c5+c6+c7).(n.(n-1)/2) + c8.(n-1)
// T(n) is of form an^2 + bn + c = 0 => Quadratic for Worst Case. O(n^2)
// Often worst-case and average-case analysis have same order of growth. 
// So Average Case is O(n^2) too.
void solve(){
    int a[]={1,2,3,4,7,6,5};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"INPUT: ";
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
    cout<<endl;
    int swaps = insertion_sort(a,n);
    cout<<"OUTPUT: ";
    cout<<swaps<<endl;
}
int main()
{ 
    solve();
    return 0;
}
