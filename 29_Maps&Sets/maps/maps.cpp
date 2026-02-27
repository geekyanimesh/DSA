#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    
    // key value pairs 
    // insertion, searching and deletion - O(N)

    unordered_map <string, int> mp;

    // mp.insert("Animesh", 007) -> WRONG

    pair<string, int> p1;
    p1.first="Animesh";
    p1.second=7;

    pair<string, int> p2;
    pair<string, int> p3;
    pair<string, int> p4;

    mp.insert(p1);  // -> CORRECT

    p2.first = "Rahul";
    p2.second = 8;
    p3.first = "Raju";
    p3.second = 9;
    p4.first = "Ajit";
    p4.second = 10;

    mp.insert(p2);
    mp.insert(p3);
    mp.insert(p4);

    // printing elements

    for(auto &ele: mp){
        cout<<ele.first<<" "<<ele.second<<endl;
    }

    // shorter method 
    cout<<endl;
 
    unordered_map<string, int> mp2;

    mp2["Animesh"]=7;
    mp2["Rahul"]=8;
    mp2["Raju"]=9;
    mp2["Ajit"]=10;

    for(auto &ele: mp2){
        cout<<ele.first<<" "<<ele.second<<endl;
    }

     mp2.erase("Raju");

     for (auto &ele : mp2)
     {
         cout << ele.first << " " << ele.second << endl;
     }

    cout<<mp2.size();

    

    return 0;
}