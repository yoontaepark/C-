#include <iostream>
using namespace std;
// Class �߰� 
// ������: ��� ���� �ʱ�ȭ

class Complex {
private:
	double real; //��� ����
	double imag;

public:
	Complex() { //������ 
		real = 0;
		imag = 0;
	}
	
	Complex(double real_, double imag_ = 0) { //�����ڴ� �����ε��� �����ϴ�, default �Ű������� ���� ���� 
		real = real_;
		imag = imag_;
	}
	
	////�����ڴ� �Ʒ��� ���� ǥ���� �����ϴ�
	//Complex() : real(0), imag(0) {}
	//Complex(double real_, double imag_) :real(real_), imag(imag_) {}

	//// �̰�� : �ڸ��� ����� ���⶧���� �Ű������� ����������� �����ϰ� �����ص� ������ �ȳ���. 
	//Complex(double real, double imag) :real(real), imag(imag) {} 

	double getReal() {
		return real;
	}

	void setReal(double real_) {
		real = real_;
	}

	double getImag() {
		return imag;
	}

	void setImag(double imag_) {
		imag = imag_;
	}
};

int main() {
	//�� ��� c1�� ù��° �Լ��� Ÿ�� (0,0)�� ������
	Complex c1;

	//c2 == c3�� ǥ���� �ٸ� ����̸�, �ι�° �Լ��� Ÿ�� (2,3)�� ������
	Complex c2 = Complex(2);
	Complex c3(2, 3);
	
	// {}�� ����� �� ����(���� ()�� ������ �����)
	Complex c4 = { 2,3 };
	Complex c5 = Complex{ 2,3 };
	Complex c6{ 2,3 };

	cout << "c1 = " << c1.getReal() << ", " << c1.getImag() << endl;
	cout << "c2 = " << c2.getReal() << ", " << c2.getImag() << endl;
	cout << "c3 = " << c3.getReal() << ", " << c3.getImag() << endl;

	return 0;
}