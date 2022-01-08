#include<iostream>

using namespace std;

class customer {

public:

	int age;
	string name; 
	
	customer() {
		cout << "\nI am inside a default constructor\n" << endl;	
	}

	customer(string n, int a) : age(a), name(n) {
		cout << "\nI am inside a parameterised constructor\n" << endl;
	}	

	void printCustomerInfo() {
		cout << "\nCustomer Info\n";
		cout << "Name : " << name << endl; 
		cout << "Age : " << age << endl; 
	}

};


int main() {

	customer* cptr1 = new customer;
	customer* cptr2 = new customer("Krish", 18);

	cout << "Name : " << cptr2->name << endl;
	cout << "Age : " << cptr2->age << endl;

	return 0;
}