#include <iostream>
using namespace std;

int main()
{
	string operation;
	double num1, num2;
	
	cout << "Enter num1" << endl;
	cin >> num1;
	cout << "Choose operation (+, -, *' /,)" << endl;
	cin >> operation;
	cout << "Enter num2" << endl;
	cin >> num2;
	
	if  ( operation == "+")
		cout << num1 + num2;
	else if ( operation == "-")
		cout << num1 - num2;
	else if  ( operation == "*")
		cout << num1 * num2;
	else if ( operation == "/")
		cout << num1 / num2;
	else
		cout << "invalid" << endl;
	
	return 0;
}