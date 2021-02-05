#include <iostream>
using namespace std;


//Counting and summing digits
int main() 
{
	int num;
	int sumDigits, countDigits;
	int currDigit;

	cout << "Enter a positive integer: ";
	cin >> num;
	sumDigits = 0;
	countDigits = 0;
	while (num > 0) //num = 0 �� �Ǹ� ��
	{
		currDigit = num % 10; //������ڿ��� �����ڸ��� �̴´�
		countDigits++; //digit�� ī�����Ѵ�. ���� ���ڸ� ������ �Ǻ�
		sumDigits += currDigit; //digit�� �� ���ڵ��� ���� ����
		num = num / 10; //���� �ڸ��� �Ѿ�� ����, 10���� ������ �����ڸ��� �����ڸ��� ��ȯ 
	}

	cout << num << " has " << countDigits << " Digits "; //�Է��� ���������� ���ڸ������� 
	cout << "and their sum is " << sumDigits << endl;


	return 0;
}