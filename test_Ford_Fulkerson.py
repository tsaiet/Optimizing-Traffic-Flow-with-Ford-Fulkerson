import Ford_Fulkerson as FF
import pytest
import numpy as np

def test_zero():
    g = FF.Graph(2)
    g.addEdge(0, 1, 0)
    
    result = FF.fordFulkerson(g, 0, 1)
    
    assert result.getMaxFlow() == 0
    
def test_one():
    g = FF.Graph(2)
    g.addEdge(0, 1, 1)
    
    result = FF.fordFulkerson(g, 0, 1)
    
    assert result.getMaxFlow() == 1
    
def test_23():
    g = FF.Graph(6)
    
    g.addEdge(0, 1, 16)
    g.addEdge(0, 2, 13)
    g.addEdge(1, 2, 10)
    g.addEdge(1, 3, 12)
    g.addEdge(2, 1, 4)
    g.addEdge(2, 4, 14)
    g.addEdge(3, 2, 9)
    g.addEdge(3, 5, 20)
    g.addEdge(4, 3, 7)
    g.addEdge(4, 5, 4)
    
    result = FF.fordFulkerson(g, 0, 5)
    
    assert result.getMaxFlow() == 23
