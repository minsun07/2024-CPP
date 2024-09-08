#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	Student(int hakbun, string name) {
		hakbun_ = hakbun;
		name_ = name;
	}
private:
	int hakbun_;
	string name_;
};

int main(void) {
	Student jisu = Student(2202, "나지수");

	return 0;
}