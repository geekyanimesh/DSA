#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    
    // pair class
    pair<int, int> p;
    
    p.first=1;
    p.second=2;

    cout<<p.first<<" "<<p.second<<" ";
    cout<<endl;

    unordered_map<string,int> mp;


    pair<string, int>p1;
    p1.first="Animesh";
    p1.second=6;

    pair<string, int> p2;
    p2.first = "Rajeev";
    p2.second = 13;

    pair<string, int> p3;
    p3.first = "Aditya";
    p3.second = 11;

    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);

    // printing

    for(pair p : mp){
        cout<<p.first<<" "<<p.second<<" ";
    }

    // better way

    unordered_map<string,int> mp2;

    mp2["Ajit"]=16;
    mp2["Raju"] =12;
    mp2["Abhi"]=17;

    cout<<endl;
    for(auto p : mp2){
        cout<<p.first<<" "<<p.second<<" ";
    }

    

    return 0;
}