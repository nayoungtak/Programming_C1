/*
* 파일명: Core C Programming 2nd Edition Chap05 Programming Assignment08
* 내용 : 비트 연산을 수행하는 게산기를 프로그램하시오.
*		 &는 비트 AND, |는 비트 OR, ^는 비트 XOR연산을 처리한다.
*		 비트 연산이므로 연산식을 입력받을 때 10진수, 8진수, 16진수를 사용할 수 있게 하고, 연산의 결과는 16진수로 출력한다.
* 작성자 : 나영탁
* 날짜 : 2025.04.21
* 버전 : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0508(void);

int main(void)
{
	assignment0508();
	return 0;
}

double assignment0508(void)
{
	unsigned int a = 0, b = 0, result = 0;
	char B;

	printf("비트 연산식? ");
	scanf("%i %c %i", &a, &B, &b);

	switch (B)
	{
	case '&':
		result = a & b;
		printf("%X %c %X = %X", a, B, b, result);
		break;
	case '|':
		result = a | b;
		printf("%X %c %X = %X", a, B, b, result);
		break;
	case '^':
		result = a ^ b;
		printf("%X %c %X = %X", a, B, b, result);
		break;
	}

	return 0;
}

