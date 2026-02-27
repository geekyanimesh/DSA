#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{

    unordered_set<int> st;
   
    st.insert(1);   // inserted in random order
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);

    // printed using for each loop

    for(int s:st){  // prints in any order
        cout<<s<<" ";
    }

    cout<<endl;
    // set always stores unique elements

    st.insert(1);
    cout<<st.size();
    cout<<endl;

    //erasing elements
    st.erase(2);
    for (int s : st)
    { 
        cout << s << " ";
    }
    cout<<endl;

    // if elements exists
    int target=3;
    if(st.find(target)!=st.end()){
        cout<<true<<endl;
    }

    return 0;
}