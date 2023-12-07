#pragma once
#include <iostream>
using namespace std;

class Graph {
    private:
        int** adjMatrix;
        int numVertices;

    public:
        // Initialize the matrix to zero
        Graph(int numVertices) {
            this->numVertices = numVertices;
            adjMatrix = new int*[numVertices];
            for (int i = 0; i < numVertices; i++) {
                adjMatrix[i] = new int[numVertices];
                for (int j = 0; j < numVertices; j++)
                    adjMatrix[i][j] = 0;
            }
        }
        // Add edges
        void addEdge(int i, int j, int n) {
            adjMatrix[i][j] = n;
        }

        // Remove edges
        void removeEdge(int i, int j) {
            adjMatrix[i][j] = 0;
        }

        // Print the martix
        void toString() {
            for (int i = 0; i < numVertices; i++) {
                cout << i << " : ";
                for (int j = 0; j < numVertices; j++)
                    cout << adjMatrix[i][j] << " ";
                cout << "\n";
            }
        }
        
        // Return edges
        int getEdge(int i, int j) const {
            return adjMatrix[i][j];
        }
        
        // Modify edges
        void modifyEdge(int i, int j, int n, bool flag) {
            if (flag)
            	adjMatrix[i][j] += n;
            else
            	adjMatrix[i][j] -= n;
        }

        ~Graph() {
            for (int i = 0; i < numVertices; i++)
                delete[] adjMatrix[i];
            delete[] adjMatrix;
        }
};

