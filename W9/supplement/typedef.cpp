//typedef 

#include <stdio.h>

int main()
{
	// �⺻����, typedef �ϰ� �ڷ��� �ְ� ������ �����ָ� �ȴ�. 
	typedef int sample;
	sample n = 20;

	//�迭�� �����ϱ�, ������ �Ŀ��� ������ ���� ��������(�迭�̰� �����Ͱ�) 
	typedef int Pair[2];
	Pair point = { 3,4 }; // int point[2] = {3, 4}, �����Ҷ��� Pair�� ��������(�迭������ �������� ����) 

	//�����͸� �����ϱ�
	typedef char *Sentence;
	Sentence name = "Yoon"; //char *name = "Yoon", �Ӽ�->C/C++->���->�ؼ�->�ƴϿ� �� �ٲ��ش�.

	return 0;
}