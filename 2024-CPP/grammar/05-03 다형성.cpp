#include <iostream>
#include <string>

using namespace std;

class Animal {
public:

	Animal(string name, unsigned int age, int leg_num)
		:name_(name),age_(age),leg_num_(leg_num){
		
		cout << "이름 : " << name_ << endl;
		cout <<"나이 : " <<  age_ << endl;
		cout << "다리 수 : " << leg_num_ << endl;
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

int main(void) {
	Animal* animal = new Animal("요아조비",8,2);
	animal->walk();
	animal->bark();
	animal->eat();
	delete animal;
}