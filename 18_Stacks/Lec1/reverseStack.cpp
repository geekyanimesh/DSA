#include <iostream>
#include <stack>
using namespace std;

void pushAtBottom(int val,stack<int> &st){
    stack<int>temp;

    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    st.push(val);

    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}


void pushAtIdx(int val,int idx, stack<int> *st){

}

int main() {
    
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // printing straight order

    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }

    cout<<endl;

    stack<int>t1;
    stack<int>t2;

    while(st.size()>0){
        int x=st.top();
        t1.push(x);
        st.pop();
    }

    while(t1.size()>0){
        int x=t1.top();
        t2.push(x);
        t1.pop();
    }

    while(t2.size()>0){
        int x=t2.top();
        st.push(x);
        t2.pop();
    }

    // printing reverse
    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }


    // pushing at bottom or any idx


    return 0;
}


// 01:03:50