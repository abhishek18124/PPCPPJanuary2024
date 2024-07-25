/*

Given an undirected graph, check if it is bipartite or not.

*/

#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>

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

	bool bfsHelper(T source, unordered_map<T, int>& colorMap) {

		queue<T> q; // to keep track of unexplored & colored vertices

		// color the 'source' vertex
		colorMap[source] = 1;
		q.push(source);

		while (!q.empty()) {
			T front = q.front();
			q.pop();

			// explore 'front'

			list<T> ngbList = neighbourMap[front];
			for (T ngb : ngbList) {
				if (colorMap.find(ngb) == colorMap.end()) {
					// ngb is not yet colored/visited
					colorMap[ngb] = 1 - colorMap[front];
					q.push(ngb);
				} else {
					// ngb is already colored / visted
					if (colorMap[ngb] == colorMap[front]) {
						// component is not bipartite
						return false;
					}
				}
			}

		}

		return true; // component is bipartite

	}

	bool isBiPartite() {
		bool flag = true; // assume graph is a biparite
		unordered_map<T, int> colorMap; // to store the mapping between
		// the vertices and their color
		for (pair<T, list<T>> p : neighbourMap) {
			T vertexLabel = p.first;
			if (colorMap.find(vertexLabel) == colorMap.end()) {
				// 'vertexLabel' not colored, hence not visited
				if (bfsHelper(vertexLabel, colorMap) == false) {
					// component is not bipartite
					flag = false;
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
	g.addEdge('B', 'D');
	g.addEdge('C', 'E');
	// g.addEdge('D', 'E');

	g.isBiPartite() ? cout << "bipartite!" << endl : cout << "not bipartite!" << endl;

	return 0;
}