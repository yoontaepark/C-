// ���ڸ� �Է��ϸ� ���ڸ����� ���ڸ�����, �׸��� ���ڸ����� ���� ������ ����ϴ� ���α׷�

#include <iostream>
using namespace std;

int analyzeDigits(int num, int& outsum);

int main()
{
	int num, countDigs, sumDigs;

	cout << "Please enter a positive integer:" << endl;
	cin >> num;

	countDigs = analyzeDigits(num, sumDigs);

	cout << num << " has " << countDigs << " digits and their sum is " << sumDigs << endl;

	return 0;
}

int analyzeDigits(int num, int& outsum)
{
	int count, sum, currDig;

	count = 0;
	sum = 0;
	while (num > 0)
	{
		currDig = num % 10;
		sum += currDig;
		count++;
		num = num / 10;
	}
	outsum = sum; //&������ ���� ���� �� �ֵ��� ������ �ϰ� 
	return count; //value �� return�� ���� �������� �Ѵ�.
}
