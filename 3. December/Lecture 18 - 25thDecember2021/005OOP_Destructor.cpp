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

		customer(customer& c) {
			cout << "\nInside the copy constructor\n";
			name = new char[100];
			strcpy(name, c.name);
			age = c.age;
			gender = c.gender;
			credits = c.credits;
		}

		~customer() {
			cout << "\nInside the destructor of " << name << "\n";
			delete [] name;
		}
};

int main() {

	customer c1("Shreya", 18, 100, 'F'); // this invokes the parameterised constructor

	c1.printCustomerInfo();

	customer c2("Aman", 18, 1000, 'M'); // this invokes the parameterised constructor

	c2.printCustomerInfo();

	return 0;
}