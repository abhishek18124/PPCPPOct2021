#include<iostream>

using namespace std;

class customer {

public:

	int age;
	string name;
	static int count;
	
	customer() {
		cout << "\nI am inside a default constructor\n" << endl;	
		count++;
	}

	customer(int age, string name) {
		cout << "\nI am inside a parameterised constructor\n" << endl;
		this->age = age;
		this->name = name;
		count++;
	}	

	void printCustomerInfo() {
		cout << "\nCustomer Info\n";
		cout << "Name : " << this->name << endl; 
		cout << "Age : "  << this->age << endl; 
	}

	static int getCount() {
		return count;
	}
};

int customer::count = 0;

int main() {

	customer c1;
	customer c2;
	customer c3;
	customer c4;

	cout << "count : " << c1.count << endl;
	cout << "count : " << c2.count << endl;
	cout << "count : " << c3.count << endl;
	cout << "count : " << c4.count << endl;

	cout << "count : " << customer::count << endl;

	cout << "count : " << customer::getCount() << endl;


	return 0;
}