#include <iostream>
#include <string>
using namespace std;

int main()
{
	int ind;
	string userName;

	cout << "Please enter your name: " << endl;
	getline(cin, userName);

	//string end char���� �ϳ��� ���
	// ex. userName�� ab�̸� length�� 2��. �ٵ� string�� userName[0], userName[1]�� ������ ��. 
	// ����, ���� ���� char�� length-1�� 
	for (ind = (userName.length() - 1); ind >= 0; ind--)
		cout << userName[ind];
	
	cout << endl;

	return 0;
}