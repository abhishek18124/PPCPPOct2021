#include<iostream>

using namespace std;

void f(int* xptr) {
  (*xptr)++;
}

int main() {
  
  int a = 0;
    
  f(&a);
  
  cout << a << endl;
  
  return 0;
}