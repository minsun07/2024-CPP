﻿#include <iostream>
#include <string>

using namespace std;

class C {
public:
	C(bool g_pointer, bool g_structure, bool l_stdio, bool g_array, bool g_if, bool g_for)
		: g_pointer_(g_pointer), g_structure_(g_structure), l_stdio_(l_stdio), g_array_(g_array), g_if_(g_if), g_for_(g_for) {

	}

	void print_show() {
		cout << "포인터" << g_pointer_ << endl;
		cout << "구조체" << g_structure_ << endl;
		cout << "stdio" << l_stdio_ << endl;
		cout << "배열" << g_array_ << endl;
		cout << "조건문" << g_if_ << endl;
		cout << "for문" << g_for_ << endl;
	}

	// int형 변수를 동적으로 할당하고 그 포인터를 반환하는 함수
	int* dynamic_allocation_int() {  
		// int 크기만큼 메모리를 동적으로 할당하고, 그 주소를 ptr에 저장
		int* ptr = (int*)malloc(sizeof(int));
		return ptr;
	}

	// 동적으로 할당된 메모리를 해제하는 함수
	void free_dynamic_allocation_int(int* ptr) {
		free(ptr);
	}

private:
	bool g_pointer_;
	bool g_structure_;
	bool l_stdio_;
	bool g_array_;
	bool g_if_;
	bool g_for_;
};

class Cpp : public C{
public:
	Cpp(bool g_pointer, bool g_structure, bool l_stdio, bool g_array, bool g_if, bool g_for
		, bool g_class, bool g_inheritance, bool g_reference)
		: C(g_pointer, g_structure, l_stdio, g_array, g_if, g_for)
		, g_class_(g_class), g_inheritance_(g_inheritance), g_reference_(g_reference) {

	}

	void print_show() {
		C::print_show();
		cout << "클래스" << g_class_ << endl;
		cout << "상속" << g_inheritance_ << endl;
		cout << "참조" << g_reference_ << endl;
	}

	int* dynamic_allocation_int() {
		int* ptr = new int;  // int 크기만큼 메모리를 동적으로 할당
		return ptr;          // 할당된 메모리의 시작 주소를 반환
	}

	void free_dynamic_allocation_int(int* ptr) {
		delete ptr;    // new로 할당된 메모리를 해제
	}

private:
	bool g_class_;
	bool g_inheritance_;
	bool g_reference_;
};

int main(void) {
	C* c = new C(true, true, true, true, true, true);
	c->print_show();
	cout << endl;
	Cpp* cpp = new Cpp(true, true, true, true, true, true, true, true, true);
	cpp->print_show();

	delete c;
	delete cpp;
	return 0;
}

