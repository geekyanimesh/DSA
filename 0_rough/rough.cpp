#include <iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
    
    string arr[]={"5","2","C","D","+"};
    stack<string> st;

    for(int i=4;i>=0;i--){
        st.push(arr[i]);
    }

    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}