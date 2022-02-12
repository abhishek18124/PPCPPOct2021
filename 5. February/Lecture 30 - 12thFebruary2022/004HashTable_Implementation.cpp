/*

	Implementation of HashTable

*/

#include<iostream>

using namespace std;

template <typename T1, typename T2>
class node {
	public :

		T1 key;
		T2 value;
		node<T1, T2>* next;

		node(T1 key, T2 value) {
			this->key = key;
			this->value = value;
			this->next = NULL;
		}
};

template <typename T1, typename T2>
class HashTable {
	int n; // capacity of the hash table
	int m; // no. of (key, value) pairs inside the hash table
	double lft; // load factor threshold
	node<T1, T2>** table; // pointer to the dyn. arr. that repr. the hash table

	int hash_fn(T1 key) {
		return key%n;
	}

	public :

		HashTable(int n=5, double lft=0.7) {
			this->n = n;
			this->lft = lft;
			this->m = 0;
			table = new node<T1, T2>*[n];
			for(int i=0; i<n; i++) {
				table[i] = NULL;
			}
		}

		void insert(T1 key, T2 value) {
			// 1. tranform the key into a hash index
			int hash_idx = hash_fn(key);

			// 2. create a new node with the given (key, value) pair
			// and insert it at the head of the linked list present 
			// at the hash index
			node<T1, T2>* newNode = new node<T1, T2>(key, value);
			newNode->next = table[hash_idx];
			table[hash_idx] = newNode;
			m++;

			double lf = m / (n*1.0);
			if(lf > lft) {
				// rehash
			}
		}

		node<T1, T2>* find(T1 key) {

			// 1. tranform the key into a hash index
			int hash_idx = hash_fn(key);

			// 2. search for a node with the given key in the linked list
			// present at the hash index
			node<T1, T2>* temp = table[hash_idx];
			while(temp != NULL) {
				if(temp->key == key) {
					break;
				}
				temp = temp->next;
			}
			return temp;
		}

		void erase(T1 key) {
			// 1. tranform the key into a hash index
			int hash_idx = hash_fn(key);

			// 2. delete the node with the given key from the linked
			// list present at the hash index
			node<T1, T2>* temp = table[hash_idx];
			if(temp && temp->key == key) {
				// delete the temp node which is at the head of the 
				// linked list present at the hash index
				table[hash_idx] = temp->next;
				delete temp;
			} else {
				node<T1, T2>* prev = NULL;
				while(temp != NULL) {
					if(temp->key == key) {
						prev->next = temp->next;
						delete temp;
						break;
					}
					prev = temp;
					temp = temp->next;
				}
			}
		}
};

int main() {
	

	return 0;	
}







