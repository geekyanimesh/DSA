#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    
    unordered_set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);

    // printing 
    for(int ele : st){
        cout<<ele<<" ";
    }

    // deleting
    st.erase(4);

    cout<<endl;
    for (int ele : st)
    {
        cout << ele << " ";
    }

    // Set always stores " unique elements" !!

    // Checking if element exists
    int target = 5;
    if(st.find(target)!=st.end()){
        cout<<"Exists";
    }

    

    return 0;
}