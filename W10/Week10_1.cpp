#include <iostream>
using namespace std;

int sortedSearch(int srtArr[], int srtArrSize, int val);

int main() {
	int srtArr[10] = { 1,3,5,7,9,11,13,15,17,19 };

	cout << sortedSearch(srtArr, 10, 13) << endl;

	return 0;
}

//���⵵: log2n ��, k��° �ݺ��Ҷ� n/2^(k-1)�� �ݺ���. (1ȸ��: n��, 2ȸ�� n/2^(2-1)��, ...) // n/2^(k-1) = 1 �� �Ǵ� k�� log2n+1 
int sortedSearch(int srtArr[], int srtArrSize, int val) {
	int low, high, mid;
	int ind;
	bool found;

	low = 0;
	high = srtArrSize - 1;
	found = false;

	while ((found == false) && (low <= high)) { //low�� high�� �Ѿ�ų�, high�� low���� �������� ���� ���ٴ� �Ҹ���
		mid = (low + high) / 2;  //mid���� ������ �ɼ��� �ִµ� �������
		if (srtArr[mid] == val) {
			ind = mid;    //ã���� ��� ind��� ������ ���� ���� �־��
			found = true;
		}
		else if (val < srtArr[mid])  //���� �߰����� �۱� ������, mid~high������ �ش����. ����, high�� mid-1(mid�� ���� �ƴϴϱ�)�� �ű�
			high = mid - 1;
		else // val > srtArr[mid], ���� �߰����� ũ�� ������, low~mid ������ �ش����. ����, low�� mid+1(mid�� ���� �ƴϴϱ�)�� �ű�
			low = mid + 1;
	}

	//while �� ������ if������ ��� ���
	if (found == true)
		return ind;
	else
		return -1;
}
