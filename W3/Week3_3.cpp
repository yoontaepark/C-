#include <iostream>
using namespace std;

int main()
{
	char userCh;

	cout << "Please enter a character:" << endl;
	cin >> userCh;

	if (userCh >= 'a' && userCh <= 'z')
		cout << userCh << " is a lower case letter" << endl;
	else if (userCh >= 'A' && userCh <= 'Z')
		cout << userCh << " is a upper case letter" << endl;
	else if (userCh >= '0' && userCh <= '9') // '0' �� �־�� ASCII Code�� ��ȯ�� �ǰ�, �׳� 0�� ������ ���� 0�� �ƴ�
		cout << userCh << " is a digit" << endl;
	else
		cout << userCh << " is not a aplha-numeric character" << endl;

	return 0;
}