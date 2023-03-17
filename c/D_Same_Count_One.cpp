#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = (low - 1); 
    for (int j=low;j<=high-1;j++){
        if (arr[j]<=pivot){
            i++; 
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
int randomized_partition(int arr[],int low,int high){
    srand(time(NULL));
    int random = low+rand()%(high-low);
    swap(arr[random],arr[high]);
    return partition(arr, low, high);
}
void randomized_quickSort(int arr[],int low,int high){
    if(low<high){
        int pivot=randomized_partition(arr,low,high);
        randomized_quickSort(arr,low,pivot-1);
        randomized_quickSort(arr,pivot+1,high);
    }
}
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    randomized_quickSort(a,0,n-1);
    int ans=a[n-1]-a[0];
    int mini_A,maxi_A;
    mini_A=a[0];maxi_A=a[n-1];
    for(int i=1;i<n;i++) {
        if(a[i] < k)
            continue;
        mini_A=min(a[0]+k,a[i]-k);
        maxi_A=max(a[i-1]+k,a[n-1]-k);
        ans=min(ans,maxi_A-mini_A);
    }
    cout<<ans;
}
