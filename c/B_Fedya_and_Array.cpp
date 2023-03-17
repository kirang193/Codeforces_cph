// Give an O(nlogk) time algorithm to merge k sorted lists into one sorted list where n is the total
// number of elements in all the input lists. (Use min-heap)
#include <bits/stdc++.h>
using namespace std;
struct nice{
    int value;
    int array_index;
    int next_index_in_array;
};
void min_heapify(vector<nice>& heap, int i){
    int size = heap.size();
    int smallest = i;
    int left = 2*i+1, right = 2*i+2;
    if(left < size && heap[left].value < heap[smallest].value)
        smallest = left;
    if(right < size && heap[right].value < heap[smallest].value)
        smallest = right;
    if(smallest != i){
        swap(heap[smallest], heap[i]);
        min_heapify(heap, smallest);
    }
}
void solve(){
    int k,len,x,n=0;cin>>k;
    // k arrays are given
    // n is sum of len of all k arrays
    vector<int>v[k],result;
    for(int i=0;i<k;i++){
        cin>>len;
        n += len;
        while(len--){
            cin>>x;
            v[i].push_back(x);
        }
    }
    vector<nice>heap(k);
    for(int i=0;i<k;i++){
        heap[i].value = v[i][0];
        heap[i].array_index = i;
        heap[i].next_index_in_array = 1;
    }
    // build min heap
    for(int i= (k-1)/2; i>=0; i--){
        min_heapify(heap,i);
    }    
    // do heapify extractng min elem and adding next corresponding element.
    for(int i=0;i<n;i++){
        // temp root to store min_element.
        // we will replace with next element in the array if exists, else we will set its value to inf.
        nice root = heap[0];
        result.push_back(root.value);
        if( root.next_index_in_array < v[root.array_index].size()){
            root.value = v[root.array_index][root.next_index_in_array];
            root.next_index_in_array +=1;
        }else{
            root.value = INT_MAX;
        }
        heap[0] = root;
        min_heapify(heap,0);
    }
    for(auto x:result)cout<<x<<" ";
    cout<<endl;
}
int32_t main()
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}
// some freq comments used while debugging the code
// for(auto x:heap){
//     cout<<x.value<<" "<<x.array_index<<" "<<x.next_index_in_array<<endl;
// }
// cout<<result[i]<<endl;
// cout<<root.next_index_in_array<<" "<<v[root.array_index].size()<<endl;
// cout<<root.value<<" "<<root.next_index_in_array;//<<" "<<v[root.array_index].size();
// cout<<root.next_index_in_array<<" "<<v[root.array_index].size();