//Q) 
//Please enter number of lines
//3
//Please enter 3 lines:
//adc def
//ghij
//klm rop qrst 
//
//Your text is:
//1. abc def
//2. ghij
//3. klm nop qrst

#include <iostream>
#include <string>
using namespace std;

string* readText(int& outTextArrSize);

int main()
{
	// �Է��� �� ���ڿ��̴� string���� �����ϰ�, �����͸� ����ؼ� �����͸� �ְ�����Ŷ� �����͸� ���
	string* textArr; 
	int textArrSize;


	// �Է°��� �־��� �� ���ϴ� ���� ������ �Լ��� �����
	textArr = readText(textArrSize);

	// ���������� ����Ѵ�. �̰�� string�� �迭���·� ���
	cout << "Your text is:" << endl;
	for (int i = 0; i < textArrSize; i++)
		cout <<i+1<<". "<<textArr[i] << endl;

	delete[] textArr; //����°� main�Լ����� �����

	return 0;
}

//()�� &�� ǥ���ߴ� = �����ϴ°� ��� ������ ��ü�� ������ �Ǿ main�Լ��� ���ư���
string* readText(int& outTextArrSize)
{
	int textArrSize;
	string* textArr;

	cout << "Please enter number of lines:" << endl;
	cin >> textArrSize;
	cin.ignore(1); //cin�� ���鼭 �߻��� �� �ִ� ��ĭ ��� ������ �ذ�

	textArr = new string[textArrSize]; //�迭 �ʱ�ȭ�� ��

	// �� arr���� 
	cout << "Please enter " << textArrSize << " lines:" << endl;
	for (int i = 0; i < textArrSize; i++)
		getline(cin, textArr[i]);

	outTextArrSize = textArrSize;
	return textArr;
}


//����: cin�� getline�� Ȱ��
//���: cin�� ����� �� enter�������� Ŀ���� ����
//      getline�� ����� �� enter �������� Ŀ���� ����
//      ����, getline�� cin�� ����ٺ��� cin ������ ������ getline�� ������ ���� ���� �ִ�. 

//ex1) 
//int i, j;
//string s;
//double x;
//cin >> i >> j >> x >> s;  

//�Է°� ����
//(space)(space)(tab)37(tab)(space)(enter)
//(space)(space)(space)43.52(space)(space)(tab)37.2(space)(enter)
//abc(enter) �� ���?

//�����
//i = 37, j = 43, x = 0.52, s = "37.2"


//ex2)
//string s1, s2, s3;
//getline(cin, s1);
//cin >> s2;
//getline(cin, s3);

//�Է°�:abc(space)def(enter)
//ghij(enter)
//kln(enter)


//�����
//s1 = "abc(space)def"����, s2 = "ghij",�׷��� enter���� Ŀ���� ������
//s3 = " "�� ���(kln�� ������� ����)
