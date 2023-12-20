#include <iostream>
#include <vector>

class MaxFlow {
public:
    std::vector<std::vector<int>> augmentingPaths;
    std::vector<int> pathCapacities;
    int max_flow;

    // Constructor
    MaxFlow() {
        max_flow = 0;
    }

    // add Augmenting Path and capacity
    void addAugmentingPath(std::vector<int> path, int capacity) {
        augmentingPaths.push_back(path);
        pathCapacities.push_back(capacity);
    }

    // set Maximum Flow
    void setMaxFlow(int flow) {
        max_flow = flow;
    }

    // get Maximum Flow
    int getMaxFlow() {
        return max_flow;
    }

    // get Augmenting Paths
    std::vector<std::vector<int>> getAugmentingPaths() {
        return augmentingPaths;
    }
    
    // get capacity
    std::vector<int> getAugmentingPathsCapacities() {
        return pathCapacities;
    }
};
