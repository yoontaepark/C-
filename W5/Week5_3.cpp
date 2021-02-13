//or you can use factorial function

/*nFact = factorial(n);
kFact = factorial(k);
n_kFact = factorial(n-k);*/

#include <iostream>
using namespace std;


int factorial(int num); //���ٺ��� �Լ��� �б� ������, �Լ��� ���� ���� �����������.(body�� �ϴܿ�) 
int kCombinations(int n, int k);

int main()
{
	int n, k, k_comb;
	cout << "Please enter n and k " << endl;
	cin >> n >> k;
	
	//�Ʒ� kCom �Լ��� ȣ���ϸ�, kCom������ factorial �Լ��� ȣ���� ���� �޾ƴٰ�, �������� return���� �ٽ� �����ش�
	k_comb = kCombinations(n, k); 

	cout << n << " choose " << k << " is " << k_comb << endl; 

	return 0;
}

int kCombinations(int n, int k)
{
	int nFact, kFact, n_kFact;
	nFact = factorial(n);
	kFact = factorial(k);
	n_kFact = factorial(n - k);

	return (nFact / (kFact * n_kFact));
}

int factorial(int num)  //���� num�� ������°� �ƴ϶� �� �Լ� ()�ȿ��� ������ ������� �Ҹ��� 
{
	int factRes, i;
	factRes = 1;
	for (i = 1; i <= num; i++)
		factRes *= i;

	return factRes;
}