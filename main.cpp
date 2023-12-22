#include <iostream>
#include "includes/Ford_Fulkerson.cpp"

int main() {
    std::cout << "Max Flow: " ;
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

    // g.toString();

    // cout << "The maximum possible flow is " << fordFulkerson(g, 0, 5) << endl;
    
    MaxFlow result;
    result = fordFulkerson(g, 0, 5);
    
    std::cout << "Max Flow: " << result.getMaxFlow() << std::endl;
    std::cout << "Augmenting Paths: " << std::endl;
    
    std::vector<std::vector<int>> allPaths = result.getAugmentingPaths();
    std::vector<int> allCapacities = result.getAugmentingPathsCapacities();
    
    for (size_t i = 0; i < allPaths.size(); i++) {
        std::cout << "Path " << i + 1 << " (Capacity: " << allCapacities[i] << "): ";
        for (int node : allPaths[i]) {
            std::cout << node << " ";
        }
        std::cout << std::endl;
    }
}
