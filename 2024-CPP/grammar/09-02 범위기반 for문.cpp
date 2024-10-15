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

	/*for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}*/

	for (int value : v) {
		cout << value << endl;
	}
	

}