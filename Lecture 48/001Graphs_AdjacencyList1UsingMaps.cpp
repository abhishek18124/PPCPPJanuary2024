/*

Implementation of the graph using adjacency list.

Note : each vertex in the graph is an integer.

*/

#include<iostream>
#include<list>
#include<unordered_map>

using namespace std;

class graph {

	int V;           // to store the number of vertices in the graph
	bool isDirected; // to indicate if the graph is directed  or not
	unordered_map<int, list<int>> ngbMap; // internal repr. of graph

public:

	graph(int V, bool isDirected = false) {
		this->V = V;
		this->isDirected = isDirected;
	}

	void addEdge(int u, int v) {

		// adds an edge b/w vertex u and v

		ngbMap[u].push_back(v);
		if (!isDirected) {
			ngbMap[v].push_back(u);
		}

	}

	void print() {

		// prints the adjacency list representation of the graph

		for (pair<int, list<int>> p : ngbMap) {
			int vertexLabel = p.first;
			list<int> ngbList = p.second;
			cout << vertexLabel << " : ";
			for (int ngb : ngbList) {
				cout << ngb << " ";
			}
			cout << endl;
		}

	}

};

int main() {

	graph g(5);

	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 3);
	g.addEdge(2, 3);
	g.addEdge(2, 4);
	g.addEdge(3, 4);

	g.print();

	return 0;
}