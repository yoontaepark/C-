//struct �߰�����
#include <stdio.h>

struct ProductInfo {
	int num;
	char name[100];
	int cost;
};

//����ü�� �Լ��� �����鼭 reference�� ������������, ������ ����ϸ� �� 
void productSale(ProductInfo* p, int percent) {
	p->cost -= p->cost * percent / 100;
}

void productSwap(ProductInfo* a, ProductInfo* b) {
	ProductInfo tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int a;

	printf("�߰� 1) ����ü ������\n");
	ProductInfo myProduct{ 111111, "���� �Ѷ��", 20000 };
	ProductInfo otherProduct{ 222222, "���� �׳ɱ�", 100000 };


	//�Լ��� ������ �Ű������� ��������, �ּҰ��� �־�� ��
	productSale(&otherProduct, 10);

	//��� struct ���°� ����� �Ȱ���, ����ü�� ���ǵ� ������ int�ڸ��� �ִ´ٰ� �����ϸ� ��. 
	productSwap(&myProduct, &otherProduct);

	printf("��ǰ ��ȣ: %d\n", myProduct.num);
	printf("��ǰ��: %s\n", myProduct.name);
	printf("����: %d\n", myProduct.cost);
	printf("\n");


	return 0;
}