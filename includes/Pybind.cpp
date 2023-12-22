#include <pybind11/stl.h>
#include <pybind11/pybind11.h>

#include "Ford_Fulkerson.cpp"

namespace py = pybind11;

PYBIND11_MODULE(Ford_Fulkerson, m) {
	m.doc() = "Ford_Fulkerson Application";
	
	py::class_<Graph>(m, "Graph")
		.def(py::init<int>())
		.def("addEdge", &Graph::addEdge)
		.def("removeEdge", &Graph::removeEdge)
		.def("getEdge", &Graph::getEdge)
		.def("modifyEdge", &Graph::modifyEdge);
		
	py::class_<MaxFlow>(m, "MaxFlow")
		.def("addAugmentingPath", &MaxFlow::addAugmentingPath)
		.def("setMaxFlow", &MaxFlow::setMaxFlow)
		.def("getMaxFlow", &MaxFlow::getMaxFlow)
		.def("getAugmentingPaths", &MaxFlow::getAugmentingPaths)
		.def("getAugmentingPathsCapacities", &MaxFlow::getAugmentingPathsCapacities);
	
	m.def("bfs", &bfs);
	m.def("fordFulkerson", &fordFulkerson);
}
