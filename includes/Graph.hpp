#pragma once

class Graph {
    private:
        int** adjMatrix;
        int numVertices;

    public:
        // Constructor
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
        
        // Return adjMatrix
        int** matrix() const {
        	return adjMatrix;
        }
        
        // Return numVertices
        int vnum() const {
        	return numVertices;
        }
        
        // Return edges
        int getEdge(int i, int j) {
            if (i >= 0 && i < numVertices && j >= 0 && j < numVertices)
            	return adjMatrix[i][j];
            else
            	return -1;
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

