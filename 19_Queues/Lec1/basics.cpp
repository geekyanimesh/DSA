#include <iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int> &q){
    int size=q.size();
    while(size>0){
       cout<<q.front()<<endl;;
       int x= q.front();
       q.pop();
       q.push(x);
       size--;
    }
    cout<<endl;
}

void stackRev(queue<int> &q){
    stack<int>st;
    int size=q.size();
    while(!q.empty()){
        int x=q.front();
        st.push(x);
        q.pop();
    }
    while(!st.empty()){
        int x=st.top();
        q.push(x);
        st.pop();
    }

}

int main() {
    
    // creation of queue
    queue<int>q;

    // push
    // pop
    // front-> top
    // size
    // back

    // adding element
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

 //   cout<<q.front()<<endl;    // 10
 //   cout<<q.back();           // 50
    
   
    display(q);
    stackRev(q);
    display(q);

    cout<<endl;
    return 0;
}