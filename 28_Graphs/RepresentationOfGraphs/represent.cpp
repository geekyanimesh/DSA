#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
using namespace std;

class Graph {
    map<int, list<int>> adjList;

public:
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Undirected graph
    }

    void print() {
        for (auto i : adjList) {
            cout << i.first << " -> ";
            for (auto j : i.second) {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    void bfs(int start) {
        map<int, bool> visited;
        queue<int> q;

        q.push(start);
        visited[start] = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (auto neighbor : adjList[node]) {
                if (!visited[neighbor]) {
                    q.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
    }
};

int main() {
    Graph g;

    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 4);
    g.addEdge(5, 6);
    g.addEdge(6, 7);

    cout << "Graph Adjacency List:" << endl;
    g.print();

    cout << "\nBFS starting from node 1:" << endl;
    g.bfs(1);

    return 0;
}
