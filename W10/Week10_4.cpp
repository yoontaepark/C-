//getline�Լ�: ��ĭ �����ؼ� �� �� �д� �Լ� 
//ignore, ���ϴ� ��ŭ ���ڸ� ��ŵ�Ѵ�. inFile.ignore(9999,'\m'), 9999���� ��ŵ

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


void openInputFile(ifstream& inFile);

struct Student {
	int id;
	double testScore;
	string name;
};

int main()
{
	ifstream inFile; //������ �ҷ����� ���� �ڷ��� ����
	openInputFile(inFile); //���Ϻҷ�����
	vector<Student> vs; //vs��� Student ����ü ���� ���� <- temp ����ü���� ���ͷ� �� ��������
	Student temp; //temp��� Student ����ü ����
	
	while (inFile >> temp.id) {//id�� �ϳ��� �о
		inFile >> temp.testScore; //���� �б�, �� ��� testScore�� ����
		inFile.ignore(9999, '\t'); //9999�� ��ŭ ���ڸ� ��ŵ�ϰų�, �Ǹ�ŭ ���ڸ� ��ŵ�Ѵ�. 
		getline(inFile, temp.name); //string���� getline���� ���� ���� �� �о���� �� �ִ�. 
		vs.push_back(temp); //temp ����ü�� �ش��ߴ� ������ ��� vs ���Ϳ� �ִ´�
	}
	cout << "Students with test scores over 90: " << endl;
	for (Student s : vs) { //vs ���͸� �ϳ��� �� �����鼭 
		if (s.testScore > 90)
			cout << s.name << endl; // 90�� �ʰ���� �̸��� ����Ѵ�. 
	}

	return 0;
}

//���� ���� �ȿ����� if��ó�� �ɾ�δ� �Լ��� 
void openInputFile(ifstream& inFile) {
	string filename;
	cout << "What filename? ";
	cin >> filename;
	inFile.open(filename); //���� ���� �б�
	while (!inFile) { //inFile�� �ƴ϶�� == inFile�� ������� �ʴ´ٸ�
		cout << "File failed to open!" << endl;
		cout << "What filename? ";
		cin >> filename;
		inFile.clear();  //��������� �ȵǾ�����, ������ ������ ����� ���⶧���� �ش�κ� ������ �� 
		inFile.open(filename); //��õ�
	}
}