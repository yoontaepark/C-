#include <iostream>
using namespace std;

int main()
{
	bool seenEndOfInput;
	int sum, numOfstudents;
	int curr;
	double average;

	cout << "Enter the grades seperated by a space" << endl;
	cout << "End the sequence by typing -1" << endl;

	sum = 0;
	numOfstudents = 0;

	//-1�� �����ؼ� go/stop�� �б��� boolean�� ������ش�
	seenEndOfInput = false;

	// -1���� �������� ��� �Է������� �𸣰ڴ�. (for Ȥ�� while �߿�, while�� ����Ѵ�) 
	// for: �ݺ��� Ƚ���� �˶�, while: �ݺ��� Ƚ���� �𸦶�, + for�� �����ϴ� ����
	// seenEndofInput�� -1�� ���� ������ curr ���� �ް� sum�ϸ鼭 conut�� �ø���
	while (seenEndOfInput == false)
	{
		cin >> curr;
		if (curr == -1)
		{
			seenEndOfInput = true;
		}
		else
		{
			sum += curr;
			numOfstudents++;
		}
	}

	average = (double)sum / (double)numOfstudents;

	cout << "The class average is " << average << endl;

	return 0;
}