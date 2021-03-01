// &var: var�� �ּҸ� ��Ÿ���� operator
// *pointer: dereferening(accessing) operator
#include <iostream>
using namespace std;

int main()
{
	int x;
	int* px;

	x = 4;
	px = &x; //�̶� px�� �ڷ����� int*(�̹� �����߱⵵ ������, �ּҰ��� �޴� �ڷ����� *�� �ٴ´�)


	//����� ������ ũ��� ��� 4 ����Ʈ��
	cout << x << endl;   // �ڷ���: int,   ũ��: 4(64��Ʈ�� �������ϸ� 8), ��: 4
 	cout << px << endl;  // �ڷ���: int*,  ũ��: 4(64��Ʈ�� �������ϸ� 8), ��: �ּҰ� 0000008D26DCFAE4
	cout << *px << endl; // �ڷ���: int,   ũ��: 4(64��Ʈ�� �������ϸ� 8), ��: 4
	cout << &px << endl; // �ڷ���: int**, ũ��: 4(64��Ʈ�� �������ϸ� 8), ��: �ּҰ� 0000008D26DCFAE8
	
	*px = 5; // x=5�� ������ ȿ��
	cout << x << endl;   // �ڷ���: int,   ũ��: 4(64��Ʈ�� �������ϸ� 8), ��: 5
	cout << px << endl;  // �ڷ���: int*,  ũ��: 4(64��Ʈ�� �������ϸ� 8), ��: �ּҰ� 0000008D26DCFAE4
	cout << *px << endl; // �ڷ���: int,   ũ��: 4(64��Ʈ�� �������ϸ� 8), ��: 5


	return 0;
}