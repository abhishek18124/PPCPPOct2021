#include<iostream>
#include<stack>

using namespace std;

// bool isBalanced(string str) {

// 	stack<char> s; 

// 	for(char ch : str) {
// 		if(ch == '(' || ch == '[' || ch == '{') {
// 			s.push(ch);
// 		} else {
// 			// ch corresponds to a closing bracket
// 			if(ch == ')') {

// 				if(s.empty() || s.top() != '(') {
// 					return false;
// 				}

// 				s.pop();

				
// 			} else if(ch == ']') {

// 				if(s.empty() || s.top() != '[') {
// 					return false;
// 				}

// 				s.pop();

// 			} else {
// 				// ch is '}'

// 				if(s.empty() || s.top() != '{') {
// 					return false;
// 				}

// 				s.pop();
// 			}
// 		}
//  	}

//  	return s.empty();

// }

bool isBalanced(string str) {
	stack<char> s;
	for(char ch : str) {
		switch(ch) {
			case '(': 
			case '[': 
			case '{': s.push(ch); break;
			case ')': if(!s.empty() && s.top() == '(') s.pop(); else return false; break;
			case ']': if(!s.empty() && s.top() == '[') s.pop(); else return false; break;
			case '}': if(!s.empty() && s.top() == '{') s.pop(); else return false;  break;
		}
	}

	return s.empty();
}

int main() {

	string str = "([]{})";

	isBalanced(str) ? cout << "Balanced!" << endl : 
	                  cout << "Not Balanced!" << endl;

	return 0;
}