#include <iostream>
#include<set>
using namespace std;

int main() {
    
    set<int>s;
    s.insert(245);
    s.insert(4);
    s.insert(2);
    s.insert(99);

    for(int m:s){
        cout<<m<<" ";   // 2 4 99 245
    }
    cout<<endl;

    int target=245;
    if(s.find(target)!=s.end()){
        cout<<"true";
    }else{
        cout<<"false";
    }

    return 0;
}