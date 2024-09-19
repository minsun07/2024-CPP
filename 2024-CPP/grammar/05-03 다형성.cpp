﻿#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
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
	Animal* animal = new Animal();
	animal->walk();
	animal->bark();
	animal->eat();
	delete animal;
}