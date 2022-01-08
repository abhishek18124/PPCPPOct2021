#include<iostream>

using namespace std;

class customer {

	int age;
	string name;
	const int userId;
	

public:

	
	customer(string name, int age, int userId) : userId(userId) {
		cout << "\nI am inside a parameterised constructor\n" << endl;
		this->age = age;
		this->name = name;
	}	

	void printCustomerInfo() {
		cout << "\nCustomer Info\n";
		cout << "Name : " << this->name << endl; 
		cout << "Age : "  << this->age << endl; 
		cout << "User Id : " << this->userId << endl;
	}

	int getAge() const {
		return age;
	}

	string getName() const {
		return name;
	}

	int getUserId() const {
		return userId;
	}
};

int main() {

	customer c("Prateek", 21, 123);

	c.printCustomerInfo();

	cout << c.getAge() << endl;

	return 0;
}