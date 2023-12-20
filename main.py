import Ford_Fulkerson
import numpy as np

vertex = int(input("Enter the vertex number: "))

graph = np.random.randint(5, size = (vertex, vertex))

Ford_Fulkerson.Graph(6)

print(graph)
