/*

Implementation of the graph using adjacency list.

Note : each vertex in the graph is an integer.

*/

#include<iostream>
#include<list>

using namespace std;

class graph {
	int V;
	list<int>* ptr;
	bool isDirected;

public:
	
	graph(int V, bool isDirected=false) {
		this->V = V;
		ptr = new list<int>[V];
		this->isDirected = isDirected;
	}

	void addEdge(int u, int v) {
		ptr[u].push_back(v);
		if(!isDirected) {
			ptr[v].push_back(u);
		}
	}

	void print() {
		for(int i=0; i<V; i++) {
			cout << i << " : ";
			list<int> neighbourList = ptr[i];
			for(int neighbour : neighbourList) {
				cout << neighbour << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
};

int main() {

	graph g(5);

	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(1, 3);
	g.addEdge(2, 3);
	g.addEdge(2, 4);
	g.addEdge(3, 4);

	g.print();

	return 0;
}