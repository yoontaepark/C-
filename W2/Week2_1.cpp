/* This program reads two integers from the user and prints their sum */

#include <iostream>
using namespace std;

int main()
{
	int num1; //will hold the first input
	int num2; //will hold the second input
	int sum; //will hold the sum

	cout << "Please enter two numbers seperated by a space:" << endl; //��¹� 
	cin >> num1 >> num2;  //�Է¹�

	sum = num1 + num2;

	cout << num1 << " + " << num2 << " = " << sum << endl; //��¹�

	return 0;
}