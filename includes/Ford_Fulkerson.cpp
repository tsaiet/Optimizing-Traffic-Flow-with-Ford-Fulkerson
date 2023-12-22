#include <iostream>
#include <limits.h>
#include <string.h>
#include <queue>
#include <algorithm>
#include <vector>

#include "Graph.hpp"
#include "MaxFlow.hpp"

#define V 30

bool bfs(Graph &graph, int s, int t, int parent[]) {
    bool visited[V];
    memset(visited, 0, sizeof(visited));

    std::queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(int v = 0; v < V; v++) {
            if(visited[v] == false && graph.getEdge(u, v) > 0) {
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }
    
    return (visited[t] == true);
}

MaxFlow fordFulkerson(Graph &graph, int s, int t) {
    int u, v;
    int parent[V];
    int max_flow = 0;
    MaxFlow result;
    // vector<vector<int>> augmentingPaths;

    while(bfs(graph, s, t, parent)) {
        int path_flow = INT_MAX;
        std::vector<int> currentPath;

        for(v = t; v != s; v = parent[v]) {
            u = parent[v];
            path_flow = std::min(path_flow, graph.getEdge(u, v));
            currentPath.push_back(v);
        }

        currentPath.push_back(s);
        reverse(currentPath.begin(), currentPath.end());
        // augmentingPaths.push_back(currentPath);
        result.addAugmentingPath(currentPath, path_flow);

        for(v = t; v != s; v = parent[v]) {
            u = parent[v];
            graph.modifyEdge(u, v, path_flow, false);
            graph.modifyEdge(v, u, path_flow, true);
        }
        
        max_flow += path_flow;
    }
    result.setMaxFlow(max_flow);

    return result;
}
