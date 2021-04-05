//File Processing
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void openInputFile(ifstream& inFile);

int main() {
	
	//�����Է��ϱ�, ofstream ��  
	ofstream outFile; // == ofstream outFile("outfile.txt")
	outFile.open("outfile.txt"); //���ٸ� ������ ������
	outFile << "Hello, world! muyaho!" << endl; //ofstream �ڷ����� ������ ������ �߰��� 

	//��������ϱ�, input1.txt ������ �ִٰ� ����
	ifstream inFile;
	openInputFile(inFile);
	vector<int> v;
	int temp;
	while (inFile >> temp) { //inFile�� �о, �������� �ƴҶ����� �ݺ��Ѵ�. input operater: >> �� �Ἥ ��ĭ ��ŵ 
		v.push_back(temp); //push_back: vector ���� ��Ҹ� �߰�, �ᱹ vector�� ������ �� ������ �� 
	}

	double sum = 0;
	for (int item : v) //������� for��, ���� item�� v�迭�� ��Ұ��� �ϳ��� ����
		sum += item;

	cout << "The average of the integers in the file is: " << sum / v.size() << endl;
}

//��������Լ�, inFile�� ���� �Է��� ��, ���� ���� ����Ǿ�� �ϹǷ� call by reference�� ����. 
void openInputFile(ifstream& inFile) {
	string filename;
	cout << "What filename? ";
	cin >> filename;
	inFile.open(filename);
	while (!inFile) { //inFile�� �ƴ϶�� == inFile�� ������� �ʴ´ٸ�
		cout << "File failed to open!" << endl;
		cout << "What filename? ";
		cin >> filename;
		inFile.clear();  //��������� �ȵǾ�����, ������ ������ ����� ���⶧���� �ش�κ� ������ �� 
		inFile.open(filename); //��õ�
	}
}