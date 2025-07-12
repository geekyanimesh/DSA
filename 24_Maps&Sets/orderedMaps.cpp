#include <iostream>
#include<map>
using namespace std;

int main() {
    
    map<int,int>m;
    m[1]=10;
    m[2]=5;
    m[3]=24;

    for(auto x:m){
        cout<<x.first<<" ";  // keys are printed in 
                             // sorted order : 1 2 3 
    }

    for(auto x:m){
        cout<<x.second<<" ";
    }

    // values need not be printed in sorted order

    return 0;
}