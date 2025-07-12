#include <iostream>
#include<queue>
using namespace std;

int main() {
    
    int arr[]={12,56,73,32,98,29,36};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
     
    // minHeap for this
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0;i<size;i++){
        pq.push(arr[i]);
    }
    int i=0;
    while(pq.size()>0){
        int x= pq.top();
        pq.pop(); 
        arr[i]=x;
        i++;
    }
    
    cout<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


    cout<<endl;
    return 0;
}