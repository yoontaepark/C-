#include <iostream>
using namespace std;

int main()
{
	
	char lowerCaseLetter, upperCaseLetter;
	int offset;

	cout << "Please enter a lower case letter:" << endl;
	cin >> lowerCaseLetter;

	offset = (int)(lowerCaseLetter - 'a'); //char ���� ��Ģ������ �����ϰ�, �̸� ������ ġȯ
	upperCaseLetter = (char)('A' + offset);

	cout << "The upper case of " << lowerCaseLetter << " is " << upperCaseLetter;	

	return 0;
}