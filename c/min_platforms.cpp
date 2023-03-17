#include <iostream>
#include<algorithm>
#define INT_MAX 2147483647
using namespace std;
void merge(int arr[],int p, int q, int r){
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1+1],R[n2+1];
    L[n1]=INT_MAX,R[n2]=INT_MAX;
    for(int i=0; i<n1; i++){
        L[i]=arr[p+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=arr[q+j+1];
    }
    int i=0,j=0;
    for(int k=p;k<=r;k++){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }else{
            arr[k]=R[j];
            j++;
        }
    }
}
void mergeSort(int arr[], int l, int r){
    if(l>=r)return;
    int m = (l+r)/2;        // divide   O(1)
    mergeSort(arr,l,m);     // conquer  T(n/2)
    mergeSort(arr,m+1,r);   // conquer  T(n/2)
    merge(arr,l,m,r);       // combine  O(n)
}
int platforms(int a[],int d[],int ar_sz){
    int n = ar_sz; 
    mergeSort(a,0,n-1); // O(N*logN) N ->length of array
    //for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
    mergeSort(d,0,n-1); // O(N*logN) 
    //for(int i=0;i<n;i++)cout<<d[i]<<" ";cout<<endl;
    int plat_needed_curr = 0,min_plat_needed=0;
    int i=0,j=0;
    while(i<n){
        if(a[i]<=d[j]){
            plat_needed_curr++;
            i++;
            if(plat_needed_curr>min_plat_needed){
                min_plat_needed=plat_needed_curr;
            }
        }else if(a[i]>d[j]){
            plat_needed_curr--;
            j++;
        }
    }
    return min_plat_needed;
}
int main()
{ 
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
    //900 940 950 1100 1500 1800
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
    // 910 1120 1130 1200 1900 2000
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"INPUT:\n arr[] = ";
    for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
    cout<<"\n dep[] = ";
    for(int i=0;i<n;i++){cout<<dep[i]<<" ";}
    cout<< "\nOUTPUT: ";
    cout << platforms(arr, dep, n);
    return 0;
}
//  Time complexity Analysis of Mergesort Algorithm:
//  Whenever we divide a number into two equal halves,
//  we can represent it as a log function. So here number of levels are atmost (logN+1).
//  Merge Function: 
//      Merging arrays require len(sub array 1)+len(sub array 2) i.e, atmost N operations.=> LInear O(N)
//  So, Total Time complexity = N(logN + 1) ~ O(NlogN).
