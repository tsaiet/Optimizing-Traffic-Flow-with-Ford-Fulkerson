#include <iostream>
#include <vector>
// #include <climits>

using namespace std;

class MaxFlow {
public:
    vector<vector<int>> augmentingPaths;
    vector<int> pathCapacities;
    int max_flow;

    // Constructor
    MaxFlow() {
        max_flow = 0;
    }

    // add Augmenting Path and capacity
    void addAugmentingPath(vector<int> path, int capacity) {
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
    vector<vector<int>> getAugmentingPaths() {
        return augmentingPaths;
    }
    
    // get capacity
    vector<int> getAugmentingPathsCapacities() {
        return pathCapacities;
    }
};

/*int main() {
    MaxFlowResult result;

    vector<int> path1 = {1, 2, 3};
    result.addAugmentingPath(path1);

    vector<int> path2 = {4, 5, 6};
    result.addAugmentingPath(path2);

    result.setMaxFlow(20);

    cout << "Max Flow: " << result.getMaxFlow() << endl;

    cout << "Augmenting Paths: " << endl;
    for (vector<int> path : result.getAugmentingPaths()) {
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}*/

