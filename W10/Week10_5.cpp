//template�̶�: type�� ���� ������ �ʾƵ� �Ǵ� �ڷ����� �ǹ� 

//�̷������� template�� �����صθ�, �ڷ����� ���� �ȳְ� T�� ��ü����(free role)
template <class T>  //template <typename SomeName> 
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

// class�� templateȭ�� class�� �Լ��� �����Ѵٸ�, SomeVal<T>:: �� ���� template ���� ���� �Է��ؾ� �Ѵ�. 
template<class T> //template ���Ÿ� ������ ��������� ��
class SomeVal {
	T data;
public: 
	T getVal() const { return data; }
	void setVal(T newValue);
};

template<class T>
void SomeVal<T>::setVal(T newValue) {  // class�� templateȭ�� class�� �Լ��� �����Ѵٸ�, SomeVal<T>:: �� ���� template ���� ���� �Է��ؾ� �Ѵ�. 
	data = newValue;
}

//linked list Node ����� (�ϴ� ����� �̷��� �����صθ� ���ϴ� ������) 
template<class T>
class LListNode {
	T data;
	LListNode<T>* next;
public:
	LListNode(T newdata = T(), LListNode<T>* newNext = nullptr) :
		data(newdata), next(newNext) {}
	friend class LList <T>;
};


//Designing linked list 
template <class T>
class LList {
	LListNode<T>* head;  //ù ��带 ����Ű�� pointer�� ����
	LListNode<T>* recursiveCopy(LListNode<T>* rhs) { //sub list copy�ϱ�
		if (rhs == nullptr)
			return nullptr;
		return new LListNode<T>(rhs->data, recursiveCopy(rhs->next));
	}
public: //�̰Ŵ� ���ôϱ�...�׳� �׷������ٸ� �ϰ� �Ѿ��
	LList() :head(nullptr) {}
	LList(const LList& rhs) :head(nullptr) { *this = rhs; }
	LList<T>& operator = (const LList<T>& rhs);
	~LList() { clear(); }
	void insertAtHead(T newdata);
	T removeFromHead();
	bool isEmpty() const { return head == nullptr; }
	void clear();
	void insertAtHead(T newdata);

	void insertAtPoint(LListNode<T>* ptr, T newdata);
	int size() const;
};

//��ũ �������鼭 �����ϴ� ��� 2����(�Ѵ� ����) 
// 1. Stopping at the end(������ ���� ���߱�): while(temp -> next != nullptr) // �� ������ ����ִٸ� �����. (���� ������)
// 2. Going off the end(������ ����): while(temp != nullptr) // temp�� ��������� �����. 

