#include <iostream>
using namespace std;

void resizeArray(int*& arr, int currentSize, int newSize)
{
	// temp��� �����ͺ����� �����ؼ� ����� ��ȯ
	int* temp = new int[newSize];

	//arr ���� ���� temp�� ����
	for (int i = 0; i < currentSize; i++)
		temp[i] = arr[i];

	// arr ���� ����
	delete[] arr;

	// temp���� �纹�� 
	arr = temp;
}


int main()
{
	int size = 10;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = i * 10;
		cout << arr[i] << endl;
	}
	int oneMore = 110;
	int newSize = size * 2;

	// �̽����� arr ����� �ٲٷ��� 10��¥���� ����� 20��¥���� ������ؾ���
	resizeArray(arr, size, newSize);
	size = newSize;
	arr[size-1] = oneMore;

	cout << "arr[" << size-1 << "] is " << arr[size-1] << endl;
	
	return 0;
}