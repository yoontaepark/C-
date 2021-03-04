//Q) 
//���μ� ���� ���� ġ�� �������� enter ġ�� �������� ���α׷� ���� 
//����� ������ ���涧���� ���ܰ� �迭�� �������� �ϳ� ���ϴ� ���(theta(n^2))�� ������,
//������ ���涧���� ���ܰ� �迭�� �ι�� �ø��� ���(1+2+4+...+n) = 2n-1��, (1+2+4+...+2^n = 2*2^n - 1����)
//�� ���� ���⵵�� theta(n)�� �ǹǷ� �̹���� ����Ѵ�. 

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

string* readText2(int& outTextArrSize);


int main()
{
	// �Է��� �� ���ڿ��̴� string���� �����ϰ�, �����͸� ����ؼ� �����͸� �ְ�����Ŷ� �����͸� ���
	string* textArr;
	int textArrSize;


	// �Է°��� �־��� �� ���ϴ� ���� ������ �Լ��� �����
	textArr = readText2(textArrSize);

	// ���������� ����Ѵ�. �̰�� string�� �迭���·� ���
	cout << "Your text is:" << endl;
	for (int i = 0; i < textArrSize; i++)
		cout << i + 1 << ". " << textArr[i] << endl;

	delete[] textArr; //����°� main�Լ����� �����

	return 0;
}


string* readText2(int& outTextArrSize)
{
	string* textArr;
	string currLine;
	int textArrSize, textArrPhysicalSize;
	bool seenEndOfText;

	cout << "Please enter a sequence of lines." << endl;
	cout << "End your input with an empty line." << endl;

	textArr = new string[1];
	textArrSize = 0;
	textArrPhysicalSize = 1;

	seenEndOfText = false;
	while (seenEndOfText == false)
	{
		getline(cin, currLine);
		if (currLine == "")
			seenEndOfText = true;
		else
		{
			if (textArrSize == textArrPhysicalSize) //����á�� ��� ���� �迭�� ����
			{
				string* newTextArr;
				newTextArr = new string[2.0*textArrPhysicalSize];

				// ������ �ϴ� ����
				for (int i = 0; i < textArrSize; i++)
					newTextArr[i] = textArr[i];
				
				//������ ����(�ٽ� �ٿ��ֱ� ���� ������ƾ� ��)
				delete[] textArr;

				// ������ ���� �ٽ� �ٿ��ֱ�, �̶� �迭 ũ�⸸ �ð� ���� �״�� �����ؿ°Ŷ�� ���� ��
				textArr = newTextArr;
				textArrPhysicalSize *= 2;
			}
			textArr[textArrSize] = currLine; // �����á���� ���� �迭�� ���� ä���ִ´�
			textArrSize++;
		}
	}
	outTextArrSize = textArrSize;
	return textArr;
}
