﻿#include <stdio.h>

int main(void) {
	int arr[4] = { 10, 20, 30, 40 };
	char str[4] = "abc";

	printf("%d %d \n", arr[0], arr[1]);
	printf("%d %d \n", *(arr + 0), *(arr + 1));

	int i = 1; 
	char c = 'b';
	double d = 3.0;

	int* pi = &i;
	char* pc = &c;
	double* pd = &d;

	printf("%d %d %d \n", pi, pc, pd);
	printf("%d %d %d \n", pi+1, pc + 1, pd + 1);

	return 0;
}