#include <iostream>
#include <cstdlib>
#include "Graph.h"
int main()
{
	// Undirected graph shown in this document for the trace of the BFS
	// algorithm.
	Graph g(10);
	g.AddUndirectedEdge(0, 5);
	g.AddUndirectedEdge(0, 3);
	g.AddUndirectedEdge(5, 4);
	g.AddUndirectedEdge(3, 4);
	g.AddUndirectedEdge(4, 7);
	g.AddUndirectedEdge(4, 6);
	g.AddUndirectedEdge(2, 6);
	g.AddUndirectedEdge(6, 1);
	g.AddUndirectedEdge(1, 9);
	g.AddUndirectedEdge(9, 8);
	g.AddUndirectedEdge(8, 2);

	//g.AddUndirectedEdge(0, 1);
	//g.AddUndirectedEdge(0, 2);
	//g.AddUndirectedEdge(1, 4);
	//g.AddUndirectedEdge(2, 3);
	//g.AddUndirectedEdge(3, 4);
	//g.AddUndirectedEdge(3, 6);
	//g.AddUndirectedEdge(5, 6);
	//g.AddUndirectedEdge(6, 7);
	//g.AddUndirectedEdge(7, 9);
	//g.AddUndirectedEdge(9, 8);
	//g.AddUndirectedEdge(8, 5);
	//g.BFS(0);
	g.BellmanFord(0);
	std::cout << std::endl << "The final state:" << std::endl;
	g.Print();
	return 0;
}