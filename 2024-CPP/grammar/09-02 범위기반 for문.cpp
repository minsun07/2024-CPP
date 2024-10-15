#include <iostream>
#include <vector>

using namespace std;

void main(void) {
	/*int arr[5] = {445, 14, 27, 456, 23};
	int i;
	for (i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}*/

	vector <int> v = { 445, 14, 27, 456, 23 };
	
	// v가 지역변수 이기 때문에 값이 변하지 않는다.
	for (int value : v) {
		value *= 10;
	}
	for (int value : v) {
		cout << value << endl;
	}
	
	// 포인터를 사용할 수 없으므로 참조(&)를 사용한다.
	for (int& value : v) {
		value *= 10;
	}
	for (int value : v) {
		cout << value << endl;
	}


	

}