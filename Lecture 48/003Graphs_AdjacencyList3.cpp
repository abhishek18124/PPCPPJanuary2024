/*

Implementation of the weighted graph using adjacency list.

Note : each vertex in the graph is generic.

*/

#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

template <typename T>
class graph {

	unordered_map<T, list<pair<T, int>>> neighbourMap; // to store the graph representation
	bool isDirected; // to indicate if the graph is directed or not

public :

	graph(bool isDirected = false) {
		this->isDirected = isDirected;
	}

	void addEdge(T u, T v, int w) {

		// adds an edge b/w vertex u and v

		neighbourMap[u].push_back({v, w}); // make_pair(v, w)
		if (!isDirected) {
			neighbourMap[v].push_back({u, w});
		}
	}

	void print() {

		// prints the adjacency list representation of the weighted-graph

		for (pair<T, list<pair<T, int>>> p : neighbourMap) {
			T vertexLabel = p.first;
			list<pair<T, int>> ngbList = p.second;
			cout << vertexLabel << " : ";
			for (pair<T, int> pp : ngbList) {
				T ngbLabel = pp.first;
				int edgeWgt = pp.second;
				cout << "(" << ngbLabel << ", " << edgeWgt << ") ";
			}
			cout << endl;
		}
	}
};

int main() {

	graph<char> g;

	g.addEdge('A', 'B', 7);
	g.addEdge('A', 'C', 1);
	g.addEdge('B', 'D', 2);
	g.addEdge('C', 'D', 9);
	g.addEdge('C', 'E', 6);
	g.addEdge('D', 'E', 5);

	g.print();

	return 0;
}