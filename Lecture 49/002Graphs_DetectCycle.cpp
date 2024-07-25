/*

Given an undirected graph, check if there exists a cycle or not.

*/

#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<list>

using namespace std;

template <typename T>
class graph {

	unordered_map<T, list<T>> neighbourMap; // to store the graph representation

public :

	void addEdge(T u, T v) {

		// adds an edge b/w vertex u and v

		neighbourMap[u].push_back(v);
		neighbourMap[v].push_back(u);

	}

	bool dfsHelper(T source, unordered_set<T>& visited, T parent) {

		// mark 'source' as visited
		visited.insert(source);

		// visit 'unvisted' vertices reachable from 'source'

		list<T> neighbourList = neighbourMap[source];
		for (T neighbour : neighbourList) {
			if (visited.find(neighbour) == visited.end()) {
				// neighbour is not visited

				if (dfsHelper(neighbour, visited, source)) {
					return true;
				}

			} else {
				// neighbour is visited

				// check if source to neighbour is a backedge

				if (neighbour != parent) {

					// source to neighbour is a backedge therefore you've found a cycle

					return true;

				}

			}
		}

		return false;
	}

	bool isCyclePresent() {
		bool flag = false; // assume cycle is not present in the graph
		unordered_set<T> visited; // to keep track of visited vertices
		for (pair<T, list<T>> p : neighbourMap) {
			T vertexLabel = p.first;
			if (visited.find(vertexLabel) == visited.end()) {
				// check if cycle is present in the component that contains 'vertex'
				if (dfsHelper(vertexLabel, visited, vertexLabel)) {
					flag = true;
					break;
				}
			}
		}

		return flag;
	}
};


int main() {

	graph<char> g;

	g.addEdge('A', 'B');
	g.addEdge('A', 'C');
	// g.addEdge('B', 'C');

	g.isCyclePresent() ? cout << "cycle found!" << endl :
	                          cout << "cycle not found!" << endl;

	return 0;
}