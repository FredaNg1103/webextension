#include <iostream>
using namespace std;

int factorial(int);

int main(){

	int number;

	cout << "Enter an integer : ";
	cin >> number;

	if (number < 0)
		cout << "This is negative integer ";
	else
		cout << number << " Factorial is " << factorial(number) << endl;

	system("pause");

	return 0;
}

int factorial(int number){

	if (number>1)
		return number*factorial(number - 1);
	else
		return 1;
}