#include <iostream>
#include <limits.h>
#include <string.h>
#include <queue>

#include "Graph.hpp"

using namespace std;

#define V 6

bool bfs(Graph &rGraph, int s, int t, int parent[]) {
    bool visited[V];
    memset(visited, 0, sizeof(visited));

    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(int v = 0; v < V; v++) {
            if(visited[v] == false && rGraph.getEdge(u, v) > 0) {
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }
    
    return (visited[t] == true);
}

int fordFulkerson(Graph &graph, int s, int t) {
    int u, v;
    int parent[V];
    int max_flow = 0;
    while(bfs(graph, s, t, parent)) {
        int path_flow = INT_MAX;
        for(v = t; v != s; v = parent[v]) {
            u = parent[v];
            path_flow = min(path_flow, graph.getEdge(u, v));
        }

        for(v = t; v != s; v = parent[v]) {
            u = parent[v];
            graph.modifyEdge(u, v, path_flow, false);
            graph.modifyEdge(v, u, path_flow, true);
        }

        max_flow += path_flow;
    }
    
    return max_flow;
}

int main() {
    Graph g(6);

    g.addEdge(0, 1, 16);
    g.addEdge(0, 2, 13);
    g.addEdge(1, 2, 10);
    g.addEdge(1, 3, 12);
    g.addEdge(2, 1, 4);
    g.addEdge(2, 4, 14);
    g.addEdge(3, 2, 9);
    g.addEdge(3, 5, 20);
    g.addEdge(4, 3, 7);
    g.addEdge(4, 5, 4);

    g.toString();

    cout << "The maximum possible flow is " << fordFulkerson(g, 0, 5) << endl;
}
