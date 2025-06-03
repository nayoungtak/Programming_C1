/*
* 파일명: Core C Programming 2nd Edition Chap03 Programming Assignment10
* 내용 : 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.04.03
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solution(void)
{
	double usd = 0, H = 0;

	printf("USD? ");
	scanf("%lf", &usd);
	printf("원/달러 환율? ");
	scanf("%lf", &H);

	double krw = usd * H;

	printf("USD %.2f = KRW %.2f", usd, krw);
	return;
}

int main(void)
{
	solution();
	return 0;
}