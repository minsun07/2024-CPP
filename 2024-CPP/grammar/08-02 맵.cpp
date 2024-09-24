#include <iostream>
#include <map>

using namespace std;

void main(void) {
	map<string, long long> money;

	//m.reserve(100); map은 연속적이지 않기 때문에 reserve를 사용할 수 없다. 필요가 없다.

	// 맵 추가
	money["jisu"] = 10000000000;
	money["subin"] = 30000000000;
	money["minsun"] = 200;


	// 반복자
	map<string, long long>::iterator iter;

	// c++에서 iterator은 이진트리이기 때문에 주소값이 뒤죽박죽임. 그래서 < 이 아니라 !=을 사용함.
	for (iter = money.begin(); iter != money.end(); iter++)  // 결과는 순서가 없음
		cout << iter->first << "는" << iter->second << endl;  // first는 key, second는 value
															 // iter은 포인터이기 때문에 -> 를 사용


	// 값 수정
	money["minsun"] = 20000000000;
	cout << "바뀐 값 : " << money["minsun"] << endl;

	// 크기
	cout << "크기는 " <<  money.size() << endl;

}