/*
* 파일명: Core C Programming 2nd Edition Chap04 Programming Assignment17
* 내용 : 7번째 비트만 1인 값, 15번째 비트만 1인 값, 13번째 비트만 1인 값, 31번째 비트만 1인 값을 구해서
*		 16진수와 10진수로 출력하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.04.10
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0417(void);

int main(void)
{
	assignment0417();
	return 0;
}

double assignment0417(void)
{
	unsigned int num1, num2, num3, num4;
	num1 = 1 << 7;
	num2 = 1 << 15;
	num3 = 1 << 23;
	num4 = 1 << 31;

	printf("7번 비트만 1인 값: %06X %d\n", num1, num1);
	printf("15번 비트만 1인 값: %06X %d\n", num2, num2);
	printf("23번 비트만 1인 값: %06X %d\n", num3, num3);
	printf("31번 비트만 1인 값: %06X %d\n", num4, num4);

	return 0;
}

