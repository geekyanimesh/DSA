#include <iostream>
#include <set>
using namespace std;

int main() {
    
    // ordered_set : all the elements remain in increasing order in unique way
    set<int>s;

    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(9);

    for(int ele:s){
        cout<<ele<< " ";
    }

    int target = 5;
    if(s.find(target)!=s.end()){
        cout<<"\nExists!";
    }else{
        cout<<"\nNot exists!";
    }

    return 0;
}