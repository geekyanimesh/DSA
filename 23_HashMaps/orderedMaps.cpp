#include <iostream>
#include <map>
using namespace std;

int main() {
    
    map<int,int> m;
    m[2]=30;
    m[1]=40;
    m[3]=50;

    for(auto x:m){
        cout<<x.first<<","<<x.second<<" ";
    }

    // keys are always sorted
    // the values are not sorted

    map<string,int> m2;
    
    m2["Animesh"]=12;
    m2["Kumar"]=22;
    m2["John"]=56;

    for(auto x:m2){
        cout<<x.first<<" "<<x.second<<" ";
    }

    return 0;
}