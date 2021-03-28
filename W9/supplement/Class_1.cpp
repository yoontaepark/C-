// Ŭ���� = �ڷ� ���� + �ڷ� ó�� = ���� + �Լ�
// Ŭ����(Ÿ��): Ư���� �뵵�� �����ϱ� ���� ������ �Լ��� ��� �� ��(�ڷ���)
// ��ü(������Ʈ): �� Ʋ�� �̿��Ͽ� �� ��ü(����, �޸� ���� ����)

#include <iostream>
using namespace std;

// ������: private, protected, public 
//�� struct: �⺻������ public�� (private ���� �ʿ�) 
//�ڡ� class : �⺻������ private�� (public ���� �ʿ�)

class TV { 
//private: //private �ȿ� �ִ� �������� main�Լ����� ������ü�� ���� ���ǵ� 
	bool powerOn;
	int channel;
	int volume;

public: //public �ȿ� �Լ����·� ������ �༭ ���� private �������� ���� 
	void on() {
		powerOn = true;
		cout << "TV�� �׽��ϴ�." << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV�� �����ϴ�." << endl;
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999){
			channel = cnl;
			cout << "ä���� " << cnl << "(��)�� �ٲ���ϴ�." << endl;
		}
	}

	// 1. volume ���� 0~100�����ε� ƥ �� ������ �Լ��� ����
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "������ " << vol << "(��)�� �ٲ���ϴ�." << endl;
		}
	}
};

int main()
{
	TV lg;
	lg.on();
	lg.setChannel(10);
	lg.setVolume(50);
	lg.setChannel(-73); //�̰� �ƿ� �۵��� ����, �̷��� private ������ ���� �� �ִ�. 


	//lg.powerOn = true;
	//lg.channel = 10;
	//lg.setVolume(50); //1. �̷������� �Լ��� �����Ҽ��� �ְ�����
	//lg.volume = 400;  //1. �Ʒ�ó�� �ٽ� volume�̶�� ������ ���� ����ϸ� ��� �ȵȴ�. 

	return 0;
}