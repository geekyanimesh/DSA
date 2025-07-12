#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    stack <int> st;
  //  cout<<st.size()<<endl;

    // pushing
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
   // cout<<st.size()<<endl;


    // pop
    st.pop();
  //  cout<<st.size()<<endl;

    // top element
    //cout<<st.top()<<endl;

    // printing by poping

    // while(st.size()>0){         // this is a drawback
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }


    // better way using extra stack

    stack<int>temp;

    while(st.size()>0){         // this is a drawback
        cout<<st.top()<<endl;
        int x=st.top();
        st.pop();
        temp.push(x);
    }

    // putting element back into st from temp

    while(temp.size()>0){         // this is a drawback
        int x=temp.top();
        temp.pop();
        st.push(x);
    }



    cout<<endl;
    return 0;
}