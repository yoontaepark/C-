#include <iostream>
using namespace std;

int main()
{
	/* if �� ()���� boolean ǥ���� ������ ����
	(c++�� �ƴϾ �Ǳ��ϴµ�, �ǵ��Ѱ�ó�� �ȳ��� �� �ִ�)
	int val = 0;

	if (val = 0)
		cout << "val is 0" << endl;
	else
		cout << "val is not 0" << endl;*/

	int userInput = 0;

	cout << "Please enter an integer:" << endl;
	cin >> userInput;
	
	if (userInput % 2 == 0)
		cout << userInput << " is even" << endl;
	else
		cout << userInput << " is odd" << endl;

	return 0;
}