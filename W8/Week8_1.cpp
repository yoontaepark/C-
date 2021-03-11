// �Լ����� �Լ� (����: Ascending, Descending) 

#include <iostream>
using namespace std;


void printAsc(int start, int end);
void printAsc2(int start, int end);
void printAsc3(int start, int end);
int factorial(int n);

int main()
{
	printAsc(1,4);
	cout << endl;
	printAsc2(1,4);
	cout << endl;
	printAsc3(1,4);
	cout << endl << factorial(4) << endl;

	return 0;
}

// ���þ� ��Ʈ���ī ���� �������� �����ϸ� ��
// 1~4��� �ϸ�, (1,3)�� �θ���, (1,2)�� �θ���, (1,1)�� �θ�������
// (1,1)���� 1�̰�, ���ͼ� 2�̰�, ���ͼ� 3�̰�, ���������� ���ͼ� 4�̴´�. 
// ��, 1,2,3,4�� ������������ �迭���ش� 
void printAsc(int start, int end)
{
	if (start == end)
		cout << start << endl;
	else
	{
		printAsc(start, end-1);
		cout << end << endl;
	}
}


// Version2, ���� ������ �������� �غ���, 1�� ���� �̰�, (2~4), 2�� �̰� (3,4)
// 3�� �̰�(4,4) 4�� �̰� ���� �̷��� ������ �ִ�. 
void printAsc2(int start, int end)
{
	if (start == end)
		cout << start << endl;
	else
	{
		cout << start << endl;
		printAsc2(start + 1, end);
	}
}

// Version3, �߰��� ©�� �����Ҽ��� �ִ�. 
void printAsc3(int start, int end)
{
	if (start == end)
		cout << start << endl;
	else
	{
		int mid = (start + end) / 2;
		printAsc3(start, mid);
		printAsc3(mid+1, end);
	}
}


// Factorial �Լ�, ���� ����ѵ�, ���������� �� ���¸� ����� �� 
// n = 4���, res �� 4*fact(3)�� �����ؼ� �����ϰ�
// fact(3)�� �ٽ� 3*fact(2), fact(2)�� �ٽ� 2*fact(1), fact(1) = 1�� �ȴ�. 
// ����, ������ ���� ���ο��� Ȯ���غ���, 4*fact(3) = 4*3*fact(2) = 4*3*2*fact(1) = 4*3*2*1 �� �ȴ�. 
int factorial(int n)
{
	int res;
	
	if (n == 1)
		return 1;
	else
	{
		res = factorial(n - 1);
		res *= n;
		return res;
	}
		
}

