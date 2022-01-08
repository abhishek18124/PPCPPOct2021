#include<iostream>

using namespace std;
class customer {

public:

	int age;
	string name;

	customer(string n, int a)  {
		cout << "\nI am inside a parameterised constructor\n" << endl;
		name = n;
		age = a;
	}	

	void printCustomerInfo() {
		cout << "\nCustomer Info\n";
		cout << "Name : " << name << endl;
		cout << "Age : "  << age << endl;
	}

};


int main() {

	customer c("Archit", 19);

	customer* cptr = &c;

	cout << "Name : " << (*cptr).name <<  "  "  << cptr->name << endl;
	cout << "Age : " << (*cptr).age << " " << cptr->age << endl;


	(*cptr).printCustomerInfo();
	cptr->printCustomerInfo();

	return 0;
}