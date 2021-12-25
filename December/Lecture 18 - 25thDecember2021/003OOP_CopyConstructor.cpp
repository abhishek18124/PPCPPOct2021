#include<iostream>
#include<cstring>
using namespace std;

class customer {

	public:
		char name[100];
		char gender;
		int  age;
		double credits;

		void printCustomerInfo() {
			cout << "\nCustomer Info\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credit : " << credits << endl;
		}

		customer() {
			cout << "\nInside the default constructor\n";
		}

		customer(char* n, int a, double c, char g) {
			cout << "\nInside the parameterised constructor with four args\n";
			strcpy(name, n);
			age = a;
			credits = c;
			gender = g;
		}

		customer(customer& c) {
			cout << "\nInside the copy constructor\n";
			strcpy(name, c.name);
			age = c.age;
			gender = c.gender;
			credits = c.credits;
		}

		void operator=(customer& c) {
			cout << "\nInside the copy assignment operator function\n";
			strcpy(name, c.name);
			age = c.age;
			gender = c.gender;
			credits = c.credits;
		}

	
};

int main() {

	customer c1("Shreya", 18, 100, 'F'); // this invokes the parameterised constructor

	c1.printCustomerInfo();

	// customer c2 = c1; // this invokes the default copy constructor
	customer c2(c1); // this invokes the default copy constructor

	c2.printCustomerInfo();

	customer c3; // this invokes the default constructor

	c3 = c1; // this invokes the copy assignment operator function
	// c3.operator=(c1);

	c3.printCustomerInfo();

	return 0;
}