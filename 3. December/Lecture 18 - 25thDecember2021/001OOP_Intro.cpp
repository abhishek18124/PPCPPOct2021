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

};

// void printCustomerInfo(customer c) {
// 	cout << "\nCustomer Info\n";
// 	cout << "Name : " << c.name << endl;
// 	cout << "Age : " << c.age << endl;
// 	cout << "Gender : " << c.gender << endl;
// 	cout << "Credit : " << c.credits << endl;
// }

int main() {

	customer c1;

	c1.gender = 'M';
	c1.age = 20;
	c1.credits = 0;
	strcpy(c1.name, "Archit");

	// cout << "\nCustomer Info\n";
	// cout << "Name : " << c1.name << endl;
	// cout << "Age : " << c1.age << endl;
	// cout << "Gender : " << c1.gender << endl;
	// cout << "Credit : " << c1.credits << endl;

	// printCustomerInfo(c1);

	c1.printCustomerInfo();

	customer c2;

	c2.gender = 'F';
	c2.age = 18;
	c2.credits = 100.0;
	strcpy(c2.name, "Shreya");

	// cout << "\nCustomer Info\n";
	// cout << "Name : " << c2.name << endl;
	// cout << "Age : " << c2.age << endl;
	// cout << "Gender : " << c2.gender << endl;
	// cout << "Credit : " << c2.credits << endl;

	// printCustomerInfo(c2);

	c2.printCustomerInfo();


	return 0;
}