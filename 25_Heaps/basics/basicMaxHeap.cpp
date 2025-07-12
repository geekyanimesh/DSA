#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    priority_queue<int> pq;     // by default max heap
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);

    cout<<pq.top()<<endl;     // greatest elemenet 

    pq.pop();
    cout<<pq.top();    // second largest element

    // searching

     

    cout<<endl;
    return 0;
}