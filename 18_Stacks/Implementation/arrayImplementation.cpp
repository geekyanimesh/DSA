#include <iostream>
using namespace std;

/*Overflow: If the stack is full and we try t
            push and element then the condititon 
            is called overflow. */

/*Underflow: If in an empty stack we perform pop()
             & top() function then we get this error.
             */

class Stack{
public:
        int arr[5];
        int idx=-1;

Stack(){
        this->idx=idx;
}

void push(int val){
    idx++;
    arr[idx]=val;   
}

void pop(){
    idx--;
}

int top(){
    if(idx>5){
        cout<<"Overflow";
    }
    return arr[idx];
}

int size(){
    return idx+1;
}

};

int main() {
    
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout<<st.top()<<endl;

    return 0;
}