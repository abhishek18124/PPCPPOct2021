/*

Implementation of the weighted graph using adjacency list.

Note : each vertex in the graph is generic.

*/

/*

Implementation of the graph using adjacency list.

Note : each vertex in the graph is generic.

*/

#include<iostream>
#include<map>
#include<list>

using namespace std;

template <typename T>
class graph {
	map<T, list<pair<T, int>>> neighbourMap;
	bool isDirected;

	public :

		graph(bool isDirected=false) {
			this->isDirected = isDirected;
		}

		void addEdge(T u, T v, int w) {
			neighbourMap[u].push_back({v, w});
			if(!isDirected) {
				neighbourMap[v].push_back({u, w});
			}
		}

		void print() {
			for(pair<T, list<pair<T, int>>> vertex : neighbourMap) {
				T vertexLabel = vertex.first;
				list<pair<T, int>> neighbourList = vertex.second;
				cout << vertexLabel << " : ";
				for(pair<T, int> neighbour : neighbourList) {
					T neighbourLabel = neighbour.first;
					int edgeWgt = neighbour.second;
					cout <<  "(" << neighbourLabel << ", " << edgeWgt << ") ";
				}
				cout << endl;
			}
			cout << endl;
		}
};

int main() {

	graph<int> g;

	g.addEdge(0, 1, 10);
	g.addEdge(0, 2, 5);
	g.addEdge(1, 2, 3);
	g.addEdge(1, 3, 1);
	g.addEdge(2, 3, 9);
	g.addEdge(2, 4, 2);
	g.addEdge(3, 4, 8);

	g.print();

	return 0;
}