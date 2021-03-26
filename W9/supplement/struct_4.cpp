//���չ���
//1. ���� ���α׷��� ��� �����?

//#include <stdio.h>
//
//typedef int Point[2];
//typedef Point* PointPtr;
//
//int main() {
//	Point p = { 3, 4 }; //int p[2] = {3, 4}
//	PointPtr pp = &p;   //Point *pp = &p
//	
//	//**pp == *(*pp) == *(*(&p)) == *p == p[0], (*pp)[0] == p[0], (*pp)[1] == p[1], 
//	printf("%d %d %d\n", **pp, (*pp)[0], (*pp)[1]); 
//}

////2. ��ĭ�� �� �ڵ��?
//
//#include <stdio.h>
//
//struct Point {
//	int x, y;
//};
//
//void pSwap(Point* p) {
//	int tmp = (*p).x; // == p->x, ������ �������� ->�� �θ��� 
//	(*p).x = (*p).y;
//	(*p).y = tmp;
//}
//
//int main() {
//	Point pos = { 3, 4 };
//
//	pSwap(&pos);
//
//	printf("(%d, %d)\n", pos.x, pos.y);
//
//}

//3. �ڵ忡�� pSwap �Լ��� Point ����ü�� ����־� ������ 

#include <stdio.h>

struct Point {
	int x, y;

	//����ü �ȿ� �ִ´�, �� ��� �Ű������� �ʿ����, ������ ������ �ʿ䰡 ����. 
	void pSwap() {
		int tmp = x; 
		x = y;
		y = tmp;
	}
};

int main() {
	Point pos = { 3, 4 };

	//�Ű������� �Լ� �Դٰ��� �ϴ°� �ƴ϶�, �׳� ����ü �ȿ��ִ� �Լ������� .���������� ȣ���ϸ� �ȴ�. 
	pos.pSwap();

	printf("(%d, %d)\n", pos.x, pos.y);

}
