#include <iostream>
using namespace std;

void selectionAlcohol();

int main(){
	
		int age = 0;
		
		cout << "Enter your age: ";
		cin >> age;
		//precondition , ensure the age is larger than 18 else not acceptable		
		if (age < 18)
			cout << "Not eligible";
		else
			selectionAlcohol();

		system("pause");
	    return 0;
}


void selectionAlcohol(){

	
	double total = 0;
	int choice;
	double price = 0;

	cout << "1.XO \n ";
	cout << "2.VSOP\n";
	cout << "3.Vodka\n";
	cout << "4.Exit \n";
	cout << "Selection:";
	cin >> choice;

	switch (choice){

	case 1: 
		total = 180 * 0.06 + price;
		break;
	case 2:
		total = 230 * 0.06 + price;
		break;
	case 3:
		total = 58 * 0.06 + price;
		break;

	default: 
		cout << "Bye" << endl;

	}

	cout << "Total : " <<total<< endl;
	
}

