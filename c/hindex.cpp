#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& citations, int p, int m, int q){
    int n1 = m-p+1,n2 = q-m;
    int L[n1+1],R[n2+1];
    L[n1]=INT_MAX,R[n2]=INT_MAX;
    for(int i=0;i<n1;i++)
        L[i] = citations[p+i];
    for(int j=0;j<n2;j++)
        R[j] = citations[m+j+1];
    int i=0,j=0;
    for(int k=p;k<=q;k++){
        if(L[i]<=R[j]){citations[k]=L[i];i++;}
        else {citations[k]=R[j];j++;}
    }
}
void mergesort(vector<int>& citations, int p, int q){
    if(p>=q)return;
    int m = (p+q)/2;
    mergesort(citations,p,m);
    mergesort(citations,m+1,q);
    merge(citations,p,m,q);
}
int hIndex(vector<int>& citations) {
    int n=citations.size();
    mergesort(citations,0,n-1);
    //for(auto x:citations)cout<<x<<' ';
    int l = 0 , r = n-1;
    while(l<=r){
        int h=(l+r)/2;
        if(citations[h]==n-h)return n-h;
        else if(citations[h]>n-h)r=h-1;
        else l=h+1;
    }
    return n-l;
}
int main(){
    vector<int> citations = {10,8,5,4,3};
    cout<<"INPUT:\n ";
    for(auto x:citations)cout<<x<<" ";
    cout<<endl;
    cout<<"OUTPUT: ";
    cout<<hIndex(citations);
}
// Time complexity of mergesort is O(N*logN)
// Time complexity of hIndex is O(logN). Since we used binary search.