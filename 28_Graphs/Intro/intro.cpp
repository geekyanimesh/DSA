#include <iostream>
#include <vector>
#include <list>
using namespace std;

vector <list<int>> graph;
int v;
void add_edge(int src, int dest, bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

int main() {
    
    cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>
    }

    return 0;
}