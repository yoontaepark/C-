//inheritance(���)

#include <iostream>
#include <string>
using namespace std;

class Pet { // base class
	string name;
	int petID;
public:
	Pet(int newID = 0) { petID = newID; }
	string getName()const { return name; }
	void setName(string newName) { name = newName; }
	void speak() const{}
};

// �ٸ��ź��� class�� ����� �����ϴ�. ����� class�� :������ ��
class Cat :public Pet { //Cat IS-A Pet // Derived Class
	double whiskerLength = 0.0;
public:
	Cat() :Pet(10000) {} // explicit call to Base constructor
	void speak() const { cout << "Meow!" << endl; }
	void setLength(double newLength);
	double getLength() const { return whiskerLength; }
	void setName(string newName);
	Cat& operator=(const Pet&);

};

// Private menbers: can be accessed only from the class that it is a part of, or those that are marked as "friend"
// Public menbers: can be accessed from anywhere inside or outside the class
// Protected Members: can be accessed only from the base class, or derived classes

//Pet�� �����ϰ�, Cat�̶�� �ɷ� ����� �޾Ҵٴ� �����Ͽ�
int main() {
	Pet p;
	Pet* pptr;
	Cat c;
	Cat* cptr;

	p = c; // Always allowed, Slicing, p���� c�� ��ü
	c = p; // Allowed if operator=(const Pet&) is overloaded, Overloading, c���� p�� ��ü, �̰�� c�� ������ �Ǿ��־�� ��
	pptr = &c; // Always allowed, Polymorphism, p �����Ͱ� ����Ű�� �ּҸ� c�� �ٲ�
	cptr = &p; // newer allowed
}