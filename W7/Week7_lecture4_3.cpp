//Q) 
//���μ� ���� ���� ġ�� �������� enter ġ�� �������� ���α׷� ���� 
//vector ����� ����ϸ� ���� ������ �����ϴ�. (vector ��� = ���� �Ҵ�)

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
#include <vector>
using namespace std;

vector<string> readText3();
int main_vector();

int main()
{
	main_vector();

	return 0;
}

int main_vector()
{
	vector<string> textVector;  //�迭�� ���ڿ��� ������. �̶� �Ʊ� �迭 ũ�� �ٲٰ� �ϴ°� ���ص� ��(��Ȯ���� ����� ����)
	
	textVector = readText3();

	cout << "Your text is:" << endl;
	for (int i = 0; i < textVector.size(); i++)
		cout << i + 1 << ". " << textVector[i] << endl;

	return 0;
}

vector<string> readText3()
{
	vector<string> textVector;
	bool seenEndOfText;
	string currLine;

	cout << "Please enter a sequence of lines." << endl;
	cout << "End your input with an empty line." << endl;

	seenEndOfText = false;
	while (seenEndOfText == false)
	{
		getline(cin, currLine);
		if (currLine == "")
			seenEndOfText = true;
		else
			textVector.push_back(currLine);
	}
	return textVector;
}
