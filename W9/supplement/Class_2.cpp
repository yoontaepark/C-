//This

#include <iostream>
using namespace std;

class MyClass {
public:
	void printThis() {
		cout << "���� �ּҴ� " << this << endl;
	}

	//this�� ���� �Ʒ�ó�� ������ ������ �Ű��� �޾Ƽ�, �ּҰ��� ������ִ� ������
	void printPtr(MyClass *ptr) {
		cout << "���� �ּҴ� " << ptr << endl;
	}

};


int main()
{
	MyClass a, b;

	cout << "a�� �ּҴ� " << &a << endl;
	cout << "b�� �ּҴ� " << &b << endl;

	//this ������ ���� �Ű����� �ȹ޾Ƶ� ��, ��Ȯ���� ������ �Ű������� �޴� ������
	a.printThis();
	b.printThis();

	//������ ������ �Ű��� �ޱ� ������, �ּҰ��� ������ ������� ��
	a.printPtr(&a);
	b.printPtr(&b);


	return 0;
}