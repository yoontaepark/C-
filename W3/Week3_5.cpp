#include <iostream>
using namespace std;


//Switch, if, if else, else�� ��� �����ϸ�, if ������ �� ���뼺�� ŭ
int main()
{

	double arg1 = 0;
	double arg2 = 0;
	double res = 0;
	char op;

	cout << "Please enter an expression of the form arg1 op arg2:" << endl;
	cin >> arg1 >> op >> arg2;

	switch(op)
	{
		case '+':
			res = arg1 + arg2;
			cout << res << endl;
			break;
		case '-':
			res = arg1 - arg2;
			cout << res << endl;
			break;
		case '*':
			res = arg1 * arg2;
			cout << res << endl;
			break;
		case '/':
			if (arg2 != 0)
			{
				res = arg1 / arg2;
				cout << res << endl;
			}
			else
				cout << "Ileagal expression" << endl;
			break;
		default:  //�Ⱦ��� ���� case�� �ش����� �ʴ� ��� �׳� ����� ���ع���(��������ϴ°� �ƴ�)
			cout << "Ileagal expression" << endl;
			break;
	}

	return 0;
}