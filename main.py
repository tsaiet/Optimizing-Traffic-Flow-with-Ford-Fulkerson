import _Ford_Fulkerson
import numpy as np

vertex = int(input("Enter the vertex number: "))

graph = np.random.randint(5, size = (vertex, vertex))

_Ford_Fulkerson.Graph(6)

print(graph)
