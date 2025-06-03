/*
* 파일명: Core C Programming 2nd Edition Chap06 Programming Assignment05
* 내용 : 인자로 전달받은 정수가 짝수인지 검사하는 is_even 함수와 홀수인지 검사하는 is_odd 함수를 작성하시오.
*		 두 한수를 이용해서 0이 입력될 때까지 입력된 정수들에 대해서 짝수의 개수와 홀수의 개수를 구해서 출력하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.05.20
* 버전 : v3.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double assignment0605(void);
int is_even(int n);
int is_odd(int n);

int main(void)
{
	assignment0605();
	return 0;
}

double assignment0605(void)
{
	int integer = 0;
	int Even = 0;
	int Odd = 0;
	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");
	while (1)
	{
		scanf("%d", &integer);
		if (integer == 0)
		{
			printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개 입니다.", Even, Odd);
			return 0;
		}
		Even += is_even(integer);
		Odd += is_odd(integer);
	}
	return 0;
}

int is_even(int integer)
{
	if (integer % 2 == 0)
	{
		return 1;
	}
	return 0;
}

int is_odd(int integer)
{
	if (integer % 2 != 0)
	{
		return 1;
	}
	return 0;
}