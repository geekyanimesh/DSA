#include <iostream>
#include<queue>
using namespace std;

int main() {
    
    priority_queue<int, vector<int>, greater <int> > pq;

    pq.push(-1);
    pq.push(12);
    pq.push(35);
    pq.push(-6);
    pq.push(29);

    cout<<pq.top(); 

    cout<<endl;
    return 0;
}