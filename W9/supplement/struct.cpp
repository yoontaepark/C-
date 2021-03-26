//struct
#include <stdio.h>

struct ProductInfo {
	int num;
	char name[100];
	int cost;
};

int main() {	
	
	// 1. struct �����ϱ� 
	printf("1. struct �����ϱ�\n");
	typedef struct { int x, y; } Point; // == struct Point {int x,y;}; �̰Ű� �� ª�⵵ �ϰ� ��������

	Point p; // == struct { int x, y; } p;

	p.x = 3;
	p.y = 4;

	printf("(%d, %d)\n", p.x, p.y);
	printf("\n");

	// �̷������� multi�� ������ ���� �ִ�
	struct Point2 {
		int x;
		int y;
		char c;
		double d;
	};


	//2. ���� ������ product ����ü ���� ����
	printf("2. ���� ������ product ����ü ���� ����\n");
	ProductInfo myProduct = { 111111, "���� �Ѷ��", 19900 }; // ���� myProduct.xx �� �ʱ�ȭ�ص� �Ǵµ�, ��Ƽ��� ����

	printf("��ǰ ��ȣ: %d\n", myProduct.num);		//��
	//printf("��ǰ ��ȣ: %d\n", &myProduct.num);		//�ּ�
	
	printf("��ǰ��: %s\n", myProduct.name);			//��
	//printf("��ǰ��: %d\n", myProduct.name);		//�ּ�, �̰�� �迭�̱⶧���� &�� ���� �ʿ�� ����, %s�� %d�θ� ����

	printf("����: %d\n", myProduct.cost);			//��
	//printf("����: %d\n", &myProduct.cost);			//�ּ�
	printf("\n");


	// 3. ����ü ������, ����ü ���� ������ �θ��� *��ȣ �ְ� .�������� �ص� ������, ����ü ū ���� -> ���� ���������� ȣ�⵵ ����   
	printf("3. ����ü ������\n");
	ProductInfo myProject{ 111111, "���� �Ѷ��", 19900 };

	ProductInfo* ptr_product = &myProject;

	printf("��ǰ ��ȣ: %d\n", myProject.num);
	printf("��ǰ��: %s\n", myProject.name);
	printf("����: %d\n", myProject.cost);
	printf("\n");

	printf("��ǰ ��ȣ: %d\n", (*ptr_product).num);
	printf("��ǰ��: %s\n", (*ptr_product).name);
	printf("����: %d\n", (*ptr_product).cost);
	printf("\n");

	// 
	printf("��ǰ ��ȣ: %d\n", ptr_product->num);
	printf("��ǰ��: %s\n", ptr_product->name);
	printf("����: %d\n", ptr_product->cost);


	return 0;
}