#include<bits/stdc++.h>
using namespace std;
long long merge(long long arr[], int left, int mid, int right) {
  int i = left, j = mid + 1, k = 0;
  long long invCount = 0;
  int temp[(right - left + 1)];
 
  while ((i <= mid) && (j <= right)) {
    if (arr[i] <= arr[j]) {
      temp[k] = arr[i];
      ++k;
      ++i;
    } else {
      temp[k] = arr[j];
      invCount += (mid - i + 1);
      ++k;
      ++j;
    }
  }
 
  while (i <= mid) {
    temp[k] = arr[i];
    ++k;
    ++i;
  }
 
  while (j <= right) {
    temp[k] = arr[j];
    ++k;
    ++j;
  }
 
  for (i = left, k = 0; i <= right; i++, k++) {
    arr[i] = temp[k];
  }
 
  return invCount;
}
long long mergeSort(long long arr[], int left, int right) {
  long long invCount = 0;
 
  if (right > left) {
    int mid = (right + left) / 2;
    invCount = mergeSort(arr, left, mid);
    invCount += mergeSort(arr, mid + 1, right);
    invCount += merge(arr, left, mid, right);
  }
  return invCount;
}
 
long long getInversions(long long arr[], int n) {
  return mergeSort(arr, 0, n - 1);
}
int main(){
    long long int a[]={1,2,3,6,4,5};
    int n =sizeof(a)/sizeof(a[0]);
    cout<<"INPUT:\n arr[] = ";
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
    cout<<"\nOUTPUT: ";
    cout<<getInversions(a,n);
    return 0;
}
