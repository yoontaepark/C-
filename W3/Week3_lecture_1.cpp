#include <iostream>
using namespace std;

// �ΰ��� ������ �ϳ��� 60�� �̸��̸� ����, �� ���� ��� 95�� �̻��̸� �������, �ƴϸ� �׳� ����

int main()
{
	int grade1, grade2 = 0;

	cout << "Please enter two grades, seperated by a space:" << endl;
	cin >> grade1 >> grade2;

	//�ϳ��� = or ��������, grade1 || grade2 < 60 �� ()�� boolean�̾�� �ϴµ� boolean�� �ι��ϴ¼�(����x) 
	if ((grade1 < 60) || (grade2 < 60))
	{
		cout << "Student failed :(" << endl;
	}
	// �Ѵ� 95���� �Ѿ�� �ϱ� ������, and ������ ��� �Ѵ�
	else if ((grade1 >= 95) && (grade2 >= 95))
	{
		cout << "Student graduated with honors!!!" << endl;
	}
	else
		cout << "Student graduated" << endl;

	return 0;
}