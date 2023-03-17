#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&a, int p, int q, int r)
{   
    int n1 = q-p+1,n2=r-q;
    int L[n1+1],R[n2+1];
    L[n1]=INT_MAX,R[n2]=INT_MAX;
    for(int i=0;i<n1;i++){
        L[i] = a[p+i];
    }
    for(int j=0;j<n2;j++){
        R[j] = a[q+j+1];
    }
    int i=0,j=0;
    for(int k=p;k<=r;k++){
        if(L[i]<=R[j]){ a[k]=L[i];i++;}
        else{a[k]=R[j];j++;}
    }
}
void mergesort(vector<int> &a, int p, int q)
{
    if(p>=q)return;
    int m = (p+q)/2;
    mergesort(a, p, m);
    mergesort(a, m+1, q);
    merge(a, p, m, q);
}
int findRadius(vector<int>& houses, vector<int>& heaters){
    int n = houses.size(),m = heaters.size();
    mergesort(houses,0,n-1);
    mergesort(heaters,0,m-1);
    vector<int>res(n,INT_MAX);
    for(int i=0,j=0;i<n&&j<m;){
        if(houses[i]<=heaters[j]){res[i]=heaters[j]-houses[i];i++;}
        else j++;
    }
    for(int i=n-1,j=m-1;i>=0&&j>=0;){
        if(houses[i]>=heaters[j]){res[i]=min(res[i],houses[i]-heaters[j]);i--;}
        else j--;
    }
    return *max_element(res.begin(),res.end());
}
int main(){
    vector<int>houses={1,5};
    vector<int>heaters={2};
    cout<<"INPUT:\n Houses = ";
    for(auto x:houses)cout<<x<<" ";
    cout<<endl;
    cout<<" Heaters = ";
    for(auto x:heaters)cout<<x<<" ";
    cout<<endl;
    cout<<"OUTPUT: ";
    cout<<findRadius(houses,heaters)<<endl;
    return 0;
}
// Time complexity of mergesort is O(N*logN)
// For iterating the houses and heaters array, it takes O(n+m)time,
// where n->length of houses array and m-> length of heaters array
// Total complexity of code is O(N*logN)