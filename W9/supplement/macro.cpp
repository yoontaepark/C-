#include <stdio.h>

//Macro: define �Լ��� ����Ѵ�.
#define MAX(A,B) (((A) > (B)) ? (A): (B))

int max(int a, int b) {
	/*if (a > b) return a;
	return b;*/

	//�����ǹ� �����ϰ� ���� ���!!!
	return (a > b) ? a : b; // ���ǹ� ? ���̶�� : �����̶�� 
}

int main() {

	printf("%d\n", max(3, 4));
	printf("%d", MAX(3, 4));

	return 0;
}
