//2. Chainging values out of active scope

 1. �Լ��� ���� ���ϸ� ��Ŵ
int main()
{
	int n;
	n = f1();
	cout << n << endl;
}

int f1()
{
	return 3;
}

 2. Call by Reference ���·� �ּҿ� ��� ���� ����
 int main()
{
	 int n;
	 f2(n);
	 cout << n << endl;
}

 // �Լ���ü�� ������ �ּҰ��� ������Ʈ ġ�� �����̹Ƿ�, n�� �ּ�(&outN)�� ã�Ƽ�, �� �ּҾ��� ���� 3���� �ٲ�� ��� �ǹ�  
 void f2(int& outN)
 {
	 outN = 3;
 }

 3. �����͸� ���
int main()
{
	 int n;
	 f3(&n);
	 cout << n << endl;
}

 // ������ ������ ���� �� �ּҸ� ã�Ƶ��� ���� ���� �����Ѵٴ� �Ҹ���
 // ���� main�Լ������� �ּҸ� ������ �޾ƾ� ��(&n)
 void f3(int* pn)
 {
	 *pn = 3;
 }

