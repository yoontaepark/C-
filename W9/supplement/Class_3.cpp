#include <iostream>
using namespace std;

class MyClass {
public:
	MyClass() {
		cout << "�����ڰ� ȣ��Ǿ���!!" << endl;
	}

	~MyClass() {
		cout << "�Ҹ��ڰ� ȣ��Ǿ���!!" << endl;
	}
};

//MyClass globalObj; //class�� ���������� ��� �����ϴ� ���� �����ڰ� ȣ��ǰ�, main�Լ����� �� �������� �Ҹ��ڰ� ȣ���

void testLocalObj() {
	cout << "testLocalObj�Լ� ����" << endl;
	MyClass localObj; //�̰Ŵ� �����ڰ� "test�Լ� ����" ���Ŀ� �����, test�Լ��� ������("test�Լ� ��") ���Ŀ� �Ҹ��ڰ� ȣ��� 
	cout << "testLocalObj�Լ� ��" << endl;

}

int main()
{
	cout << "main�Լ� ����" << endl;
	testLocalObj();
	cout << "main�Լ� ��" << endl;


	return 0;
}