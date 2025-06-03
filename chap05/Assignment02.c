/*
* 파일명: Core C Programming 2nd Edition Chap05 Programming Assignment02
* 내용 : 이차원 평면에 있는 점의 좌표 (x, y)를 입력받아 어느 사분면의 점인지 출력하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.04.22
* 버전 : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0502(void);

int main(void)
{
	assignment0502();
	return 0;
}

double assignment0502(void)
{
	int x = 0, y = 0;
	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("1사분면에 있습니다.");
	}
	else if (x < 0 && y > 0)
	{
		printf("2사분면에 있습니다.");
	}
	else if (x < 0 && y < 0)
	{
		printf("3사분면에 있습니다.");
	}
	else if (x > 0 && y < 0)
	{
		printf("4사분면에 있습니다.");
	}
	else
	{
		printf("좌표축 위에 있습니다.");
	}

	return 0;
}

