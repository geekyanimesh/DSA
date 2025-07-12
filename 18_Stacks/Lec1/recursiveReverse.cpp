#include <iostream>
#include <stack>
using namespace std;

void displayRec(stack <int> &st){
    if(st.size()==0){
        return;
    }else{
        displayRec(st);
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        
        st.push(x);
    } 
}

int main() {

    stack <int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    displayRec(st);


    return 0;
}

