// String�� ũ�� �񱳴� ���? ���̺񱳴� �ƴ�. (ex) abc���� de�� �� ŭ)
// �������̰� �ƴ϶�, ùchar�� int�� ��ȯ�� ���� �� ũ�� (ù char ���� ������ �� ���� ��) ŭ 
#include <iostream>
#include <string>
using namespace std;

int main()
{

	/*string str1, str2;

	str1 = "abcdefg";
	str2 = "abcdxyz";

	if (str1 > str2)
		cout << "str1 is greater than str2";
	else
		cout << "str2 is greater than str1";*/

// Search function in a string. 
// ������.find("ã�� ����")

	string str3 = "abcdbcdefg";

	//���� �����ϴ� ��� ���� �����. ��Ȯ���� ���� ù��° index ���� ���. str3[6]�� ��ġ�ϹǷ� 6
	cout << str3.find("de") << endl; 
	
	//���� �������� �ʴ� ��� ������ �����. ���� if���� �ɾ��ش�. 
	if (str3.find("xyz") == string::npos) //npos: �����Ⱚ�̶�� �����ϱ� 
		cout << "not found" << endl;
	else
		cout << "found" << endl;

	// ����� ���� �ߺ����� �����ϴ� ��� ���� �տ� �ִ� ��ġ�� ����Ѵ�. 
	cout << str3.find("cd") << endl;

	//find �Լ��� Ȯ��� ��������, ������ ��ġ�� �����ؼ� ã������ �ֵ�. 
	// ���� cd �������� ("cd", 3) �̶�� �����ϸ�, [3]���� ��ȸ�� �����ϱ� ������ ���� cd�� ã�Ƽ� ù��° �ε����� 5�� ����Ѵ�. 
	cout << str3.find("cd", 3) << endl;

	return 0;
}