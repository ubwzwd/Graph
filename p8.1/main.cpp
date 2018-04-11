#include <iostream>
#include <cstdlib>
#include "Graph.h"
int main(int argc, char * argv[])
{
	float alpha = atof(argv[1]);
	// Undirected graph shown in this document for the trace of the BFS
	// algorithm.
	Graph g(8,alpha);
	//g.AddUndirectedEdge(0, 1);
	//g.AddUndirectedEdge(0, 4);
	//g.AddUndirectedEdge(1, 5);
	//g.AddUndirectedEdge(2, 3);
	//g.AddUndirectedEdge(2, 5);
	//g.AddUndirectedEdge(2, 6);
	//g.AddUndirectedEdge(3, 6);
	//g.AddUndirectedEdge(3, 7);
	//g.AddUndirectedEdge(5, 6);
	//g.AddUndirectedEdge(6, 7);
	//g.BFS(1);
	// Print graph and shortest paths
	//std::cout << "** Breadth-First Search **\n";
	g.Print();
	//for (int i = 0; i < g.getSize(); i++)
	//{
	//	std::cout << "Shorted path from 1 to " << i << ": ";
	//	g.PrintShortestPath(1, i);
	//	std::cout << '\n';
	//}
	//std::cout << '\n';
	// Directed graph shown in this document for the trace of the DFS
	// algorithm.
	//Graph g2(6);
	//g2.AddEdge(0, 1);
	//g2.AddEdge(0, 4);
	//g2.AddEdge(0, 3);
	//g2.AddEdge(1, 4);
	//g2.AddEdge(3, 4);
	//g2.AddEdge(4, 2);
	//g2.AddEdge(4, 5);
	//g2.AddEdge(5, 3);
	//g2.DFS(0);
	//std::cout << "** Depth-First Search **\n";
	//g2.Print();
	//std::cout << '\n';
	//// Directed, weighted graph with negative weights, used in the trace of
	//// the Bellman-Ford algorithm in this document.
	//Graph g3(5);
	//g3.AddEdge(0, 1, 6);
	//g3.AddEdge(0, 3, 7);
	//g3.AddEdge(1, 2, 5);
	//g3.AddEdge(1, 3, 8);
	//g3.AddEdge(1, 4, -4);
	//g3.AddEdge(2, 1, -2);
	//g3.AddEdge(3, 2, -3); g3.AddEdge(3, 4, 9);
	//g3.AddEdge(4, 0, 2);
	//g3.BellmanFord(0);
	//// Print graph and shortest paths
	//std::cout << "** Bellman-Ford **\n";
	//g3.Print();
	//for (int i = 0; i < g3.getSize(); i++)
	//{
	//	std::cout << "Shorted path from 0 to " << i << ": ";
	//	g3.PrintShortestPath(0, i);
	//	std::cout << '\n';
	//}
	//std::cout << '\n';
	//// Directed, weighted graph with non-negative weights, used in the trace
	//// of the Dijkstra algorithm in this document.
	//Graph g4(5);
	//g4.AddEdge(0, 1, 10);
	//g4.AddEdge(0, 3, 5);
	//g4.AddEdge(1, 2, 1);
	//g4.AddEdge(1, 3, 2);
	//g4.AddEdge(2, 4, 4);
	//g4.AddEdge(3, 1, 3);
	//g4.AddEdge(3, 2, 9);
	//g4.AddEdge(3, 4, 2);
	//g4.AddEdge(4, 0, 7);
	//g4.AddEdge(4, 2, 6);
	//g4.Dijkstra(0);
	//// Print graph and shortest paths
	//std::cout << "** Dijkstra **\n";
	//g4.Print();
	//for (int i = 0; i < g4.getSize(); i++)
	//{
	//	std::cout << "Shorted path from 0 to " << i << ": ";
	//	g4.PrintShortestPath(0, i);
	//	std::cout << '\n';
	//}
	//std::cout << '\n';
	return 0;
}