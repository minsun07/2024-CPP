﻿#include <stdio.h>
#include <string.h>

int main(void) {
	char str[30] = "develop hungry";
	char str2[30];

	// str에 있는 내용을 str2에 복사
	strcpy_s(str2, str);

	printf("%s", str2);
}