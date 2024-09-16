#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	
	// 생성자
	Student(int hukbun, const char* name):hukbun_(hukbun) {
		int length = strlen(name);

		// '\0'가 들어가기 위해 공간 하나 더 추가
		name_ = new char[length + 1];

		strcpy(name_, name);
		cout << "생성자 호출 완료" << endl;
	}

	// 복사 생성자(깊은 복사)
	Student(const Student& rhs) : hukbun_(rhs.hukbun_){

		int length = strlen(rhs.name_);  // 1. 원본 객체의 문자열 길이 계산
										 // rhs는 복사될 원본 객체

		
		name_ = new char[length + 1]; // 2. 새로운 메모리 블록 할당
									  // '\0'가 들어가기 위해 공간 하나 더 추가
									  // 문자열 길이 계산 시 널 종료 문자(\0)는 제외됨
		

		strcpy(name_, rhs.name_);     // 3. 원본 객체의 문자열을 새로운 메모리에 복사

		cout << "복사 생성자 호출 완료" << endl;
	}

	// 소멸자 : 객체가 소멸될 때(메모리에서 지워질 때) 호출되는 함수
	~Student() {
		delete []name_;
		cout << "소멸자 호출 완료" << endl;
	}

	// 클래스의 멤버를 출력
	void show() {
		cout << hukbun_ << endl;
		cout << name_ << endl;
	}

private:
	int hukbun_;
	char* name_;
};

int main(void) {
	// 일반적인 생성자
	Student stu = Student(2213, "JBS");

	// 복사 생성자
	Student stu2 = stu;

	
	return 0;
}