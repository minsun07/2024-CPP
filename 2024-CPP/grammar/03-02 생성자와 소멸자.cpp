﻿#include <iostream>
#include <string.h>

using namespace std;

class Student {
public:
	
	Student(int hakbun, const char* name) : hakbun_(hakbun)
	{	
		int length = strlen(name);

		// '\0'가 들어가기 위해 공간 하나 더 추가
		name_ = new char[length + 1];

		strcpy(name_, name);
	}

	// 소멸자 : 객체가 소멸될 때(메모리에서 지워질 때) 호출되는 함수
	~Student(void) {
		delete []name_;
	}

	// 클래스의 멤버를 출력
	void show(void){}

private:
	int hakbun_;
	char* name_;
};

int main(void)
{
	Student* stu = new Student(2213, "조수빈");

	delete stu;

	return 0;
}