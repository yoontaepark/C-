#include <stdio.h>

// ������, �迭, call by value/reference ����

//1. Call by value, main�Լ��� ���� ����
void swap(int x, int y) {
	int tmp = x;
	x = y;
	y = tmp;
}

//2. Call by reference, �Ű������� &�� �ֱ⸸ �Ѵ�. 
// C++���� �����ϴ� ���, �Ű������� �ּҸ� �޾Ƽ� �ٲ��ش�~ ��� �����ϱ�
void swap2(int& x, int& y) {
	int tmp = x;
	x = y;
	y = tmp;
}

//3. �����͸� �Ű������� �ѱ��, �����ͺ����� �޾ƾ��ϴ�, �����δ� &(�ּҰ�)�� �־�� �Ѵ�. call by reference�� �� 
// �������� C��� ���(�Ⱦ��ٴ°� �ƴ�) 
void swap3(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

//4. �迭�� �Ű������� �ѱ��, �� �迭 == �����Ͷ�� �����ϸ� ����, �迭�� �����͸� ���� �ް� ������ [] �迭 ǥ���� ���� �ȴ�. 
void printArr(int arr[]) {  //arr[] == *arr ȥ�밡�� 
	for (int i = 0; i < 4; i++)
		arr[i] *= 2;
}


int main() {
	
	int a = 2, b = 3;
	swap(a, b);
	printf("a = %d, b= %d\n", a, b);

	int c = 2, d = 3;
	swap2(c, d);
	printf("a = %d, b= %d\n", c, d);

	int e = 2, f = 3;
	swap3(&e, &f);
	printf("a = %d, b= %d\n", e, f);


	int arr[4] = { 1,2,3,4 };
	printArr(arr);  //arr == &arr[0], �ٸ� �Ű����� �ѱ涧 �ּҸ� �Ѱܾ� �°�, ���� ù�ּҸ� �ѱ� 

	for (int i = 0; i < 4; i++)
		printf("%d ", arr[i]);

//5. �迭 vs ������, ��ǻ� ��ġ�� ���Ƴ����� ��(��ɻ�)
	int brr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 5-1. �Ϲ����� ���̽�, �迭���� ���
	for (int i = 0; i < 10; i++)
		printf("%d ", brr[i]);
	printf("\n");

	// 5-2 arr == &arr[0], arr+i == &arr[0+i]�ϱ�, *arr�� *&arr[0]��, arr�迭 0��° �ּҿ����� �� ���� ����ض�
	for (int i = 0; i < 10; i++)
		printf("%d ", *(brr+i));
	printf("\n");

	//5-3 *ptr ������ ������ �ּҰ� &brr[0] �ʱ�ȭ, ���� �ּҰ��� �ϳ��� �ø���. 
	// *ptr = brr �̶�� �Ҹ��� ptr �̶�� ����Ʈ ������ == brr(�ּҰ�) �̶�� �Ҹ���. ���� ptr+1 ��°� brr+1 �̰�, &brr[1] �� �ǹ���   
	for (int *ptr = brr; ptr < brr+10; ptr++)
		printf("%d ", *ptr); // ptr �ּҰ��� �ش��ϴ� ��!!! 
	printf("\n");


	return 0;

}