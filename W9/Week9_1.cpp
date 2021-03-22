// Class 
#include <iostream>
using namespace std;

class Date 
{
// �� ����, ���ٲ�(default�� private�� ���� ������� �ʾƵ� �Ǳ� ��)
private:
	int day;
	int month;
	int year;

// �� ���氡��, �ʱ�ȭ�ϴ� ����� �Ʒ��� ���� ���ٷ� �ص� �ǰ�
public:
	Date() : day(1), month(1), year(1970) {}  

// �Ʒ�ó�� �߰�ȣ �ְ� ���پ� �־ �ȴ�. 
//public:
//	Date()
//	{
//		day = 1;
//		month = 1;
//		year = 1970;
//	}
//};

// ����:
// Some operators cannot be overloaded: ., ::, *., sizeof, ?:
// Some can only be overloaded as a memeber: =, []
// Some, almost, cannot be overloaded as a member: <<, >>

// ����2: 
// Three problem, Big 3 solution. 3���� ����� �ϳ��� �ʿ��� ��� 3������ ��� ���� �ʿ���
// Destructor: Called automatically when the object falls out of scope - ����
// Copy Constructor: Constructs an object based on an existing one - �ູ��
// Assignment Operator: Copies one object to another (deep copy) - ������