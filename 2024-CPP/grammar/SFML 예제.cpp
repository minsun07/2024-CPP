﻿#include <iostream>

using namespace std;

void call_by_reference(int& val)
{
	// 새로운 지역변수 val를 만들고 val가 가리키고 있는 대상의 값을 바꾼다.
	val = 10;
}

int main(void)
{
	int num = 4;
	// num의 값은 바뀐다.
	call_by_reference(num);
	cout << num;
	return 0;
}