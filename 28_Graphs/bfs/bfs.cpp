#include <iostream>
#include <list>
#include <map>
#include <vector>
#include <queue>
using namespace std;


class Graph{
    map<int,list<int>> adjList;\

public:
    void addEdge(int u, int v){
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void print(){
        for(auto i:adjList){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

    vector<int> bfs(int size){

        vector<int> bfsNodes();
        int vis[size];
        queue <int> q;

        

        while(!q.empty()){

        }


     }

};

int main() {
    
    Graph g;

    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(2,5);
    g.addEdge(3,4);
    g.addEdge(5,6);
    g.addEdge(6,7);

    // Print the adjacency list representation of the graph
    g.print();

    return 0;
}