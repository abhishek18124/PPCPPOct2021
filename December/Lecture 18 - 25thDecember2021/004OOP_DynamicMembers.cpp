#include<iostream>
#include<cstring>
using namespace std;

class customer {

	public:
		char* name;
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

		customer(char* n, int a, double c, char g) {
			cout << "\nInside the parameterised constructor with four args\n";
			name = new char[100];
			strcpy(name, n);
			age = a;
			credits = c;
			gender = g;
		}

		// default copy constructor

		// customer(customer& c) {
		// 	cout << "\nInside the copy constructor\n";
		// 	name = c.name; // only address is copied by default
		// 	age = c.age;
		// 	gender = c.gender;
		// 	credits = c.credits;
		// }

		customer(customer& c) {
			cout << "\nInside the copy constructor\n";
			name = new char[100];
			strcpy(name, c.name);
			age = c.age;
			gender = c.gender;
			credits = c.credits;
		}
};

int main() {

	customer c1("Shreya", 18, 100, 'F'); // this invokes the parameterised constructor

	c1.printCustomerInfo();

	customer c2(c1); // this invokes the copy constructor

	c2.printCustomerInfo();

	strcpy(c2.name, "Ishita");
	
	c2.printCustomerInfo();

	c1.printCustomerInfo();

	return 0;
}