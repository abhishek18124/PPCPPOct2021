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

		customer(char* n, int a, double c) {
			cout << "\nInside the parameterised constructor with three args\n";
			strcpy(name, n);
			age = a;
			credits = c;
		}
		

};

int main() {

	customer c1; // this invokes the default constructor

	c1.gender = 'M';
	c1.age = 20;
	c1.credits = 0;
	strcpy(c1.name, "Archit");

	c1.printCustomerInfo();

	customer c2("Shreya", 18, 100, 'F'); // this invokes the parameterised constructor

	c2.printCustomerInfo();

	customer c3("Vishal", 19, 500);

	c3.printCustomerInfo();

	return 0;
}