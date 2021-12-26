#include<iostream>

using namespace std;

class creditCard {

	string cardNumber;
	string cardType;

public:

	// creditCard() {
	// 	cout << "\nInside default constructor of creditCard class\n"; 
	// }

	creditCard(string cn, string ct) {
		cout << "\nInside parameterised constructor of creditCard class\n";
		cardNumber = cn;
		cardType = ct;
	}

	string getCardNumber() {
		return cardNumber;
	}

	string getCardType() {
		return cardType;
	}

};

class customer {

	int age;
	string name;
	creditCard card; // member object

public:

	customer(string n, int a, string cn, string ct) : name(n), age(a),  card(cn, ct) {
		cout << "\nI am inside a parameterised constructor\n" << endl;
		// name = n;
		// age = a;
	}	

	void printCustomerInfo() {
		cout << "\nCustomer Info\n";
		cout << "Name : " << name << endl;
		cout << "Age : "  << age << endl;
		cout << "CardNumber : " << card.getCardNumber() << endl;
		cout << "CardType : "   << card.getCardType() << endl;
	}

};


int main() {

	customer c1("Aryan", 18, "1234-5678-0123", "Visa");

	c1.printCustomerInfo();
     
	return 0;
}