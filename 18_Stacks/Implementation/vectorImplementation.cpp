#include <iostream>
#include <vector>
using namespace std;

class Stack{
public:
        vector<int> vec;
        
void push(int val){
    vec.push_back(val);   
}

void pop(){
    vec.pop_back();
}

int top(){
    return vec[vec.size()-1];
}

int size(){
    return vec.size();
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