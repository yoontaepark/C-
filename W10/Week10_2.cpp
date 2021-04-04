//Sorting Algorithms
//Selection-sort, Merge-sort 
//Selection Sort: ó������ ������ �ڶ� �� ���Ѵ����� ����, �ι�°�� ��� ����°~�ڶ� �� ���Ѵ����� ����, �ݺ�..
//Merge Sort: �ݳ����� ���� ��Ʈ���Ŀ� ���ļ� ��Ʈ�Ѵ�


//1. Selection Sort

//���� �������� ã�Ƽ�, �� ���� ����ִ� �ε����� ���Ͻ�Ű��
//���⵵ = n^2+n = n^2
//���⵵ = n 
int findIndexOfMin(int arr[], int low, int high) { 
	int min, minInd;

	min = arr[low];  //ó������ low�� 0��° �迭��
	minInd = low;

	//0��°�� 1~n��° �迭�� ���ؾ��ϹǷ�, ���������� +1�̾�� ��
	for (int i = low + 1; i <= high; i++) {
		if (arr[i] < min) { //min���� ���� �迭�� �ִٸ�, min�� ���Ƴ����. 
			min = arr[i];
			minInd = i;
		}
	}

	return minInd;

}

//���� �������� ����ִ� �ε����� �޾Ƽ�, 0��°���� �ٲ�ġ��, 0��°�� �ٲ�ġ�� 0��° �����ϰ� �� �Լ� ������ 
//���⵵: n + n-1 + ... + 1 = n^2
void selectionSort(int arr[], int arrSize) {

	for (int i = 0; i < arrSize; i++) {
		int minInd = findIndexOfMin(arr, i, arrSize-1);  //���� �������� ã�� ��
		swap(arr[i], arr[minInd]);
	}

}


//1. Merge Sort
//���⵵: log2n * n , Lv0: 1�� �迭�� n�� ����(�� ����� 1*n), Lv1: 2�� �迭�� n/2��, Lv2: 4�� �迭�� n/4��, ..., Lv k: 2^k�� �迭�� n/(2^k)��...
//������ Lv�� log2n�� �ǰ�, �̶� n�� �迭�� 1�� ����. (2^k = n�� �Ǵ� k �� log2n) 
//�ٶ� log2n�� ���� n�� ����

#include <iostream>
using namespace std;

void printArray(int arr[], int arrSize);
void mergeSort(int arr[], int low, int high);
void merge(int arr[], int lowLeft, int highLeft, int highRight); // lowright == highleft+1 �̹Ƿ� ���� �Ű������� �ȹ޾Ƶ� �� 


int main() {
	int arr[8] = { 14,5,8,10,13,1,18,3 };
	int arrSize = 8;

	mergeSort(arr, 0, arrSize - 1);
	printArray(arr, arrSize);

	return 0;
}


void printArray(int arr[], int arrSize) {
	int i;

	for (i = 0; i < arrSize; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

void mergeSort(int arr[], int low, int high) {
	int midInd;

	if (low == high)
		return;
	else {
		midInd = (low + high) / 2;
		mergeSort(arr, low, midInd);
		mergeSort(arr, midInd+1, high);
		merge(arr, low, midInd, high);
	}
}


void merge(int arr[], int lowLeft, int highLeft, int highRight) {
	int lowRight, size;
	int* mergedArr;
	int iLeft, iRight, iRes; 

	lowRight = highLeft + 1; // lowRight�� ���� ����
	size = highRight - lowLeft + 1; // �迭�� �� ũ��
	mergedArr = new int[size]; //���ο� �迭�� ����, �迭�� �޾ƾ��ϴ� �����ͺ����� �޴´�

	iLeft = lowLeft;   // ���� ù�迭 
	iRight = lowRight; // ������ ù�迭
	iRes = 0; //���ο� �迭�� ä���ֱ� ���� �迭 ���� �ʱ�ȭ(0����)

	while ((iLeft <= highLeft) && (iRight <= highRight)) {
		if (arr[iLeft] < arr[iRight]) { //���ʹ迭 �� ������ �迭�� ���ؼ� ���ʹ迭�� ù ���ڰ� �� �۴ٸ�
			mergedArr[iRes] = arr[iLeft];  //�� �������� ���ο� �迭�� ä���ִ´�
			iLeft++; // ���� �迭�� �����ɷ� �Ѿ��
			iRes++;  // ���ο� �迭�� �����ɷ� �Ѿ��
		}
		else { //������ �迭 ���ڰ� �� ũ�ٸ�(������쵵 �����ϴµ�, ��� ��ȣ�� ��� �ٴ� �������) 
			mergedArr[iRes] = arr[iRight]; //������ �迭�� ���ڸ� ���ο� �迭�� ä���ִ´�
			iRight++; // ������ �迭�� �����ɷ� �Ѿ��
			iRes++;   // ���ο� �迭�� �����ɷ� �Ѿ�� 
		}
	}

	while (iLeft <= highLeft) { //���ʸ� ���Ҵٸ�, ������ ������ ���ο� �迭�� ���� �ֱ� 
		mergedArr[iRes] = arr[iLeft];
		iLeft++;
		iRes++;
	}

	while (iRight <= highRight) { //�����ʸ� ���Ҵٸ�, ������ �������� ���ο� �迭�� ���� �ֱ� 
		mergedArr[iRes] = arr[iRight];
		iRight++;
		iRes++;
	}

	for (int i = 0, iArr = lowLeft; i < size; i++, iArr++)
		arr[iArr] = mergedArr[i];

	delete []mergedArr;

}