import Ford_Fulkerson as FF
import numpy as np

if __name__=='__main__':
	# Choose the inner node number to generate adjacency matrix and print the DAG graph

	node_num = int(input("Enter the vertex number: "))

	node_num += 2

	graph = np.random.randint(5, size = (node_num, node_num))

	# Build the graph made by C++

	g = FF.Graph(node_num)
	for i in range(node_num):
	    for j in range(node_num):
                if ((i == j) | (i > j)):
                    graph[i, j] = 0
                if graph[i, j] != 0:
                    g.addEdge(i, j, graph[i, j])
		    
	print(graph)
	
	# Build more objects made by C++
	# Set the route from source to sink

	result = FF.fordFulkerson(g, 0, node_num-1)
	allPaths = result.getAugmentingPaths()
	allCapacities = result.getAugmentingPathsCapacities()
	
	# Print information about maximum flow and each augmenting path

	print("\nMax flow: ",result.getMaxFlow())
	print("\nAugmenting Paths:")

	for i in range(len(allPaths)):
	    print("Path ", i+1, " (Capacity: ", allCapacities[i], "): ", sep = "", end = "")
	    for j in range(len(allPaths[i])):
                print(allPaths[i][j], end = " ")
	    print()
