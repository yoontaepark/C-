#include <iostream>
using namespace std;

// 4���� ���ڸ� �Է¹޾Ƽ�, ¦�� Ȥ�� Ȧ�� ������ ������ Ȯ���ϴ� ���α׷�

int main()
{
	////��� 1, �׳� 4���� ������ �����ؼ� ���� if���� ���δ�, �Ǳ��ϴµ� �� �ڵ尡 ���
	//int num1 = 0;
	//int num2 = 0;
	//int num3 = 0;
	//int num4 = 0;
	//int evensCount = 0;
	//int oddsCount = 0;

	//cout << "Please enter 4 positive integers, separated by a space" << endl;
	//cin >> num1 >> num2 >> num3 >> num4;

	//if ((num1 % 2) == 0)
	//	evensCount += 1;
	//else
	//	oddsCount += 1;

	//if ((num2 % 2) == 0)
	//	evensCount += 1;
	//else
	//	oddsCount += 1;

	//if ((num3 % 2) == 0)
	//	evensCount += 1;
	//else
	//	oddsCount += 1;

	//if ((num4 % 2) == 0)
	//	evensCount += 1;
	//else
	//	oddsCount += 1;

	//���2: num ��ü�� ������ �����Ѵ�. (repeat �Լ��� ���� ����)

	int num = 0;
	int evensCount = 0;
	int oddsCount = 0;

	cout << "Please enter 4 positive integers, separated by a space" << endl;
	//repeat 4 time: �̷��� ���� ���� �ݺ��ؼ� if���� �ۼ����� �ʾƵ� �ȴ�. 
	cin >> num;  
	if ((num % 2) == 0)
		evensCount += 1;
	else
		oddsCount += 1;

	cin >> num;
	if ((num % 2) == 0)
		evensCount += 1;
	else
		oddsCount += 1;

	cin >> num;
	if ((num % 2) == 0)
		evensCount += 1;
	else
		oddsCount += 1;

	cin >> num;
	if ((num % 2) == 0)
		evensCount += 1;
	else
		oddsCount += 1;

	if (evensCount > oddsCount)
		cout << "More even numbers" << endl;
	else if (evensCount < oddsCount)
		cout << "More odd numbers" << endl;
	else
		cout << "Same number of evens and odds" << endl;

	return 0;

}