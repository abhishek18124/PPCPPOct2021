#include<iostream>

using namespace std;
class customer {

	int age;
	string name;

public:

	customer(string name, int age)  {
		cout << "\nI am inside a parameterised constructor\n" << endl;
		this->name = name;
		this->age = age;
	}	

	void printCustomerInfo() {
		cout << "\nCustomer Info\n";
		cout << "Name : " << (*this).name << endl;
		cout << "Age : "  << this->age << endl;
	}

	bool isSameObject(customer* cptr) {
		return this == cptr;
	}

};


int main() {

	customer c1("Vishal", 19);
	customer c2("Antriksh", 18);

	c1.printCustomerInfo();

	c1.isSameObject(&c2) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}