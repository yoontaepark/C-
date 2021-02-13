// Call by Value vs Call by Reference

#include <iostream>
using namespace std;

void swap1(int a, int b);
void swap2(int& a, int& b);

int main()
{
	int a = 3, b = 4;
	cout << "Call by Value" << endl;
	cout << "Before: a = " << a << " b = " << b << endl;
	swap1(a, b);
	cout << "after: a = " << a << " b = " << b << endl;
	cout << endl;

	cout << "Call by Value" << endl;
	cout << "Before: a = " << a << " b = " << b << endl;
	swap2(a, b);
	cout << "after: a = " << a << " b = " << b << endl;

	return 0;
}

//Call by Value, ���ϰ��� ���ٸ� main�Լ����� ������ ����, �Է°��� ������������ &�� �ɾ�� ��. 
void swap1(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

//Call by Reference, &a�� ��� ��ġ�� �ش��ϴ� ���� �����ع��ȱ� ������ main�Լ��� �ٲ�
void swap2(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

