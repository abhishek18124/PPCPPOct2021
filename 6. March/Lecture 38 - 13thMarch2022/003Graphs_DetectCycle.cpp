/*

Given an undirected graph design an algorithm to check if there exists a cycle or not.

*/

#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<list>

using namespace std;

template <typename T>
class graph {
	unordered_map<T, list<T>> neighbourMap;

	public :

		void addEdge(T u, T v) {
			neighbourMap[u].push_back(v);
			neighbourMap[v].push_back(u);
		}

		bool dfsHelper(T source, unordered_set<T>& visited, T parent) {
			visited.insert(source);

			list<T> neighbourList = neighbourMap[source];
			for(T neighbour : neighbourList) {
				if(visited.find(neighbour) == visited.end()) {
					// neighbour is not visited
					if(dfsHelper(neighbour, visited, source)) {
						return true;
					}

				} else {
					// neighbour is visited
					if(neighbour != parent) {
						return true;
					}
				}
			}

			return false;
		}

		bool isCyclePresent() {
			bool flag = false; // assume cycle is not present
			unordered_set<T> visited;
			for(pair<T, list<T>> vertex : neighbourMap) {
				T vertexLabel = vertex.first;
				if(visited.find(vertexLabel) == visited.end()) {
					if(dfsHelper(vertexLabel, visited, vertexLabel)) {
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

	g.isCyclePresent() ? cout << "Cycle is Present!" << endl :
	                     cout << "Cycle is not Present!" << endl;

	return 0;
}