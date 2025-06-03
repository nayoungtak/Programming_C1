/*
* 파일명: Core C Programming 2nd Edition Chap05 Programming Assignment03
* 내용 : 거스름돈의 금액을 입력받아 오만원, 만원, 천원, 백원, 십원짜리가 각각 몇 개 필요한지 구해서 출력하시오.
*		 십원 미만 단위는 절삭한다.
* 작성자 : 나영탁
* 날짜 : 2025.04.21
* 버전 : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0503(void);
double gesan(int gus);

int main(void)
{
	assignment0503();
	return 0;
}

double assignment0503(void)
{
	int gus = 0;

	gus = gesan(gus);

	if ((gus / 50000) != 0)
	{
		printf("%7d %2d장\n", 50000, gus / 50000);
		gus %= 50000;
	}
	if ((gus / 10000) != 0)
	{
		printf("%7d %2d장\n", 10000, gus / 10000);
		gus %= 10000;
	}
	if ((gus / 5000) != 0)
	{
		printf("%7d %2d장\n", 5000, gus / 5000);
		gus %= 5000;
	}
	if ((gus / 1000) != 0)
	{
		printf("%7d %2d장\n", 1000, gus / 1000);
		gus %= 1000;
	}
	if ((gus / 100) != 0)
	{
		printf("%7d %2d장\n", 100, gus / 100);
		gus %= 100;
	}
	if ((gus / 10) != 0)
	{
		printf("%7d %2d장\n", 10, gus / 10);
	}

	return 0;
}

double gesan(int gus)
{

	printf("거스름돈 ? ");
	scanf("%d", &gus);

	gus = gus - (gus % 10);
	printf("거스름돈 (10원 미만 절삭): %d\n", gus);

	return gus;
}
