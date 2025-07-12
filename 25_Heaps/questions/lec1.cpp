#include <iostream>
#include <queue>
using namespace std;

int main() {

    int arr[]={10,20,-4,6,18,24,105,118};
    int size = 8;
    
//  Q1. Find the kth smallest elememt in an array -- maxHeap
    
    int k1=3;
    priority_queue<int> pq1;
    for(int i=0;i<size;i++){
        pq1.push(arr[i]);
        if(pq1.size()>k1) pq1.pop();
    }
    cout<<pq1.top()<<" ";     // 3rd smallest element

// Q2. Find the kth largest element in an array -- minHeap

    int k2=3;
    priority_queue<int, vector<int>, greater<int> >pq2;
    for(int i=0;i<size;i++){
        pq2.push(arr[i]);
        if(pq2.size()>k2) pq2.pop();
    }
    cout<<pq2.top()<<endl;

// Q3. Sort a 'k' sorted array

    int arr3[] = {6,5,3,2,8,10,9};
    int size3 = 7;
    int k3=3;
    vector<int> ans;

    // sorted order -- {2,3,5,6,8,9,10}

    priority_queue<int, vector<int>, greater<int>> pq3;
    
    for(int i=0;i<size3;i++){
        pq3.push(arr3[i]);
        if(pq3.size()>k3){
            ans.push_back(pq3.top());
            pq3.pop();
        }
    }

     while(pq3.size()>0){
        ans.push_back(pq3.top());
        pq3.pop();
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"  ";
    }

    // 55:31 remaining
   
    cout<<endl;
    return 0;
}

 