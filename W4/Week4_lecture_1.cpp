#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	int counter, powerof2;

	cout << "Please enter a postive integer: " << endl;
	cin >> n;


	//while�� while�� ��()�� ���ǹ��� �ְ�, �ʱ�ȭ�� ����ǥ���� ���� ���� �ؾ��Ѵ�. 
	cout << "Using while - direct approach" << endl;
	counter = 1;
	while (counter <= n)
	{
		powerof2 = pow(2, counter - 1);		
		cout << counter << ". " << powerof2 << endl;
		counter++;
	}

	//for�� �ʱ�ȭ, ���ǹ�, ����ǥ���� �ѹ��� �Ѵ�. 
	cout << endl << "Using for - direct approach" << endl;
	for (counter = 1; counter <= n; counter ++)
	{
		powerof2 = pow(2, counter - 1);
		cout << counter << ". " << powerof2 << endl;
	}


	cout << endl<< "Using while - incremental approach" << endl;
	counter = 1;
	powerof2 = 1;
	while (counter <= n)
	{
		//powerof2 = pow(2, counter - 1);
		cout << counter << ". " << powerof2 << endl;
		counter++;
		powerof2 *= 2;
	}

	cout << endl << "Using for - incremental approach" << endl;
	//for���� �ʱ�ȭ�� �������� ������ ���� ���� �ִ�. (,�� ����)
	for (counter = 1, powerof2 = 1; counter <= n; counter++, powerof2 *= 2)
	{
		//powerof2 = pow(2, counter - 1);
		cout << counter << ". " << powerof2 << endl;
	}

	return 0;
}
