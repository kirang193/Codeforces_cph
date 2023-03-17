#include <bits/stdc++.h>
using namespace std;
int extract_max(vector<int>& heap, int i){
    int l = 2*i+1, r = 2*i+2;
    int sz = heap.size();
    int largest = i;
    if(l<sz && heap[l] > heap[largest]){
        largest = l;
    }
    if(r<sz && heap[r] > heap[largest]){
        largest = r;
    }
    if(largest!=i){
        swap(heap[i],heap[largest]);
        return extract_max(heap, largest)+1;
    }
    return 0;
}
void solve(){
    int n;cin>>n;
    vector<int>heap(n);
    for(int i=0;i<n;i++)cin>>heap[i];
    // for deletion of max_element at node 0 we replace node 0 with node heap.size()-1 and do maxheapify.
    heap[0] = heap[n-1];
    // we can just put n-1 node to be largest min value.-> ~ to deleting the node
    heap[n-1] = INT_MIN;
    int xchanges = extract_max(heap, 0);
    cout<<xchanges<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}