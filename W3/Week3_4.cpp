#include <iostream>
#include <string>
using namespace std;


int main()
{
	int hour24, hour12, minutes24 = 0;
	char temp; //�Է½ÿ��� :�� �޾ƾ� �ϴ� ���, ���� ��¹��� �� �ᵵ �Ǳ���
	string period;

	cout << "Please enter a time in a 24-hour format:" << endl;
	cin >> hour24 >> temp >> minutes24;

	if (hour24 >= 0 && hour24 <= 11)
	{
		period = "am";
		if (hour24 == 0)
			hour12 = 12;
		else
			hour12 = hour24;
	}
	else
	{
		period = "pm";
		if (hour24 == 12)
			hour12 = 12;
		else
			hour12 = hour24 - 12;
	}

	cout << hour24 << temp << minutes24 << " is " << hour12 << temp << minutes24 << period << endl;
	// 08���� 8�� �����µ�, 0�� �����ϴ� 2�ڸ� ������ ǥ���ϴ� ����� ã�ƺ��� ��

	return 0;
}