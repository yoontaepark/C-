#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	//1) Using getline function to get strings including spaces(Concatenating)

	cout << "Please enter your name" << endl;
	// cin >> str; ���� �����ؼ� ǥ���� ����
	getline(cin, str); // �̷��� �ؾ� ���⸦ �����ؼ� ǥ������
	cout << str << endl;
	

	//2) Indexing Strings
	// String�� [0] [1] �� �޸� string�� �����ϴ� ������ char���� ������

	string str1, str2;
	char ch;

	str1 = "abcdefg";
	cout << str1[0] << " " << str1[1] << " " << str1[2] << endl;

	ch = str1[3];
	cout << str1[0] << " " << str1[1] << " " << str1[2] << " " << ch << endl;


	// 3) Slicing strings
	// ������.substr(start point, how long)�� ����Ѵ� 

	cout << str1.substr(3, 2) << endl; //3�� ������ 0,1,2�� �ƴ϶� [3] ���� �����ؼ� 2�ڸ�, [3], [4]
	str2 = str1.substr(2, 3); //�� ��� c(str1[2]�ϱ�), d, e�� ����


	// 4) Length, ������.length() �Լ��� ���
	cout << str1.length() << endl;  //7�� ���;���., ������ char�� �̰� ������ (length - 1) ���ֱ� 


	return 0;
}