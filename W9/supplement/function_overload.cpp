#include <iostream>
#include <string>
using namespace std;

// �Լ� overload


//1. �Լ��� �Ȱ����� ���鼭 ���� type�� �ٲٸ� �ߺ�ó���� �ȵǰ� ���� ������ �ִ�. 
//&���۷����� �̿��� �⺻����
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

//���� double�� �ٲ�, ������ ����
void swapd(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}

//������ ������ �Ű������� �޴� case
void swapp(int* (&a), int* (&b)) { //main�� ������ �ּҰ��̶� �ּҰ��� �޴� ������ ������ ��� ������ ��
								   //�׳� *�� ���� ������, �ֽô��� �ѱ� ������ &a �� �����ϸ� �ȴ� 
	int* tmp = a;
	a = b;
	b = tmp;
}

void swapp2(int*a, int*b) { //main�� ������ �ּҰ��̶� �ּҰ��� �޴� ������ ������ ��� ������ ��
								   //�׳� *�� ���� ������, �ֽô��� �ѱ� ������ &a �� �����ϸ� �ȴ� 
	int* tmp = a;
	a = b;
	b = tmp;
}

int inventory[64] = { 0 };
int score = 0;

//2. �Լ��� �Ȱ����� ���鼭 �Ű����� ������ �ٸ��� �ϸ� �ߺ�ó���� �ȵǰ� ���� ������ �ִ�. 
// �̰� �����ε� ������
void getitem(int itemId) {
	inventory[itemId]++;
}

void getitem(int itemId, int cnt) {
	inventory[itemId] += cnt;
}

void getitem(int itemId, int cnt, int sc) {
	inventory[itemId] += cnt;
	score += sc;
}

// ���� ������/�ȵ����� �𸣴� �ֵ��� �Ű������� �ʱ�ȭ �����ν� �Լ��� ����� ���� �ִ�. 
// �ٸ�, default �Ű����� ������ �����ʿ������� ������  
void getitem2(int itemId, int cnt = 1, int sc = 0) {
	inventory[itemId] += cnt;
	score += sc;
}





int main() {
	
	// String ���õ� ������ Ȱ��
	//string name;

	//cout << "�̸� �Է�: ";
	//cin >> name;

	//string message = "�ȳ��ϼ���, " + name + "��. ";
	//cout << message << endl;

	int a = 20, b = 30;
	double da = 2.222, db = 3.333;
	int* pa = &a, * pb = &b;

	swap(a, b);
	swapd(da, db); 
	swapp(pa, pb);
	swapp2(&a, &b);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	
	std::cout << "da: " << da << std::endl;
	std::cout << "db: " << db << std::endl;

	std::cout << "*pa: " << *pa << std::endl;
	std::cout << "*pb: " << *pb << std::endl;	
	

	getitem(6, 5);
	getitem(3, 2);
	getitem(3);
	getitem(11, 34, 7000);
	getitem2(10);
	getitem2(10, 9);
	getitem2(10, 9, 5000);

	cout << score << endl;
	for (int i = 0; i < 16; i++)
		cout << inventory[i] << ' ';
	cout << endl;
	

	return 0;
}