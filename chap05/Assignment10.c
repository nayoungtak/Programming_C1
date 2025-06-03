/*
* 파일명: Core C Programming 2nd Edition Chap05 Programming Assignment10
* 내용 : 핸드폰 요금 계산서에 보면 "10원 미만 절사"같은 표현을 볼 수 있다.
*		 금액과 절사 단위를 입력받아 절사 기능을 처리하는 프로그램을 작성하시오.
*		 절사 단위는 10^0, 10^1, 10^2처럼 10의 거듭제곱로 입력받아야 한다.
* 작성자 : 나영탁
* 날짜 : 2025.04.21
* 버전 : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0510(void);

int main(void)
{
	assignment0510();
	return 0;
}

double assignment0510(void)
{
	int money = 0, jul = 0, a = 1;

	printf("금액? ");
	scanf("%d", &money);
	printf("절사단위 (10의 지수승)? ");
	scanf("%d", &jul);

	if (jul < 0)
	{
		printf("절사 단위는 10의 지수승으로 입력해야 합니다.");
		return 0;
	}

	int i = 0;
	while (i < jul)
	{
		i++;
		a = a * 10;
	}

	money = money - (money % a);
	printf("금액(%d 미만 절사): %d\n", a, money);

	return 0;
}

