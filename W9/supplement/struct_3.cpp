#include <stdio.h>

 //Case 1. ����ü �ȿ� �Լ� ����
//struct Time {
//	int h, m, s;
//
//	//����ü �ȿ� �Լ� ���𰡴�, �̶� ����ü ���� ������ �״�� ����� �� �ִ�. 
//	int totalsec() {
//		return 3600 * h + 60 * m + s;
//	}
//};
//
//int main() {
//	Time t = { 1, 22, 48 };
//	
//	//����ü.�Լ����� ���� ����ü ���� �Լ� ��� 
//	printf("%d", t.totalsec());
//
//	return 0;
//}


// Case 2. ����ü�� �Լ��� ������ ����
//struct Time {
//	int h, m, s;
//};
//
////�Լ������ �Ű������� ����ü�� �ְ�, �Լ��ȿ��� ����ü�� ������ �ٷ� ���θ���, ����ü.���������� �ҷ��� ��
//int totalsec(Time t) {
//	return 3600 * t.h + 60 * t.m + t.s;
//}
//
//int main() {
//	Time t = { 1, 22, 48 };
//
//	//�Լ� ȣ��� �Ű������� ()�ȿ� �ִ´�. 
//	printf("%d", totalsec(t));
//
//	return 0;
//}


// Case 3
struct Point {
	int x, y;

	//����ü �ȿ� �Լ� ǥ���� {}�� �����ֱ� 
	void moveRight() { x++; }
	void moveLeft() { x--; }
	void moveUp() { y++; }
	void moveDown() { y--; }
};

int main() {
	Point p = { 2,5 };
	p.moveDown();
	p.moveRight();

	printf("(%d, %d)", p.x, p.y);
	
	return 0;
}