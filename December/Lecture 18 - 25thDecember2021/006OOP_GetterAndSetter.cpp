#include<iostream>
#include<cstring>
using namespace std;

class customer {

	char gender;
	double credits;
		
	public:
		char* name;
		int  age;
		
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

		void setGender(char g) {
			gender = g;
		}

	    char getGender() {
	    	return gender;
		}

		void applyCoupon(string str) {
			if(str == "2022") {
				credits += 200;
			} else {
				cout << "invalid coupon!" << endl;
			}
		}

		double getCredits() {
			return credits;
		}
};

int main() {

	customer c1("Shreya", 18, 100, 'F'); // this invokes the parameterised constructor

	c1.setGender('-');

	cout << c1.getGender() << endl;

	c1.applyCoupon("2021");

	cout << c1.getCredits() << endl;

	return 0;
}