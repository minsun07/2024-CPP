#include <iostream>
#include <string>

using namespace std;

class Animal {
public:

	Animal(string name, unsigned int age, int leg_num)
		:name_(name),age_(age),leg_num_(leg_num){
		
		cout << "이름: " << name_ << endl;
		cout <<"나이: " <<  age_ << endl;
		cout << "다리 수: " << leg_num_ << endl;
	}

	void walk(void) {
		cout << "걷다" << endl;
	}

	void bark(void) {
		cout << "짖다" << endl;
	}

	void eat(void) {
		cout << "먹다" << endl;
	}
private:
	string name_;
	unsigned int age_;
	int leg_num_;
};

class Dog : public Animal {
public:
	Dog(string name, unsigned int age, int leg_num, int loyalty)
		: Animal(name, age, leg_num), loyalty_(loyalty) {
		cout << "충성도: " << loyalty_ << endl;
	}

	// c++은 디폴트가 정적바인딩이기 때문에 가상함수로 
	//오버라이딩하여 동적 바인딩 구현 한다.
	void bark() { cout << "울프울프" << endl; }
	void eat() { cout << "왕~왕~" << endl; }
	void walk() { cout << "촵촵촵촵" << endl; }

private:
	int loyalty_; //충성도
};

int main(void) {
	Animal* animal = new Animal("요아조비",8,2);
	animal->walk();
	animal->bark();
	animal->eat();
	delete animal;

	animal = new Dog("마루", 5, 2, 100);
	animal-> bark();
	animal->eat();
	animal->walk();
	delete animal;
}