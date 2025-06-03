/*
* 파일명: Core C Programming 2nd Edition Chap05 Programming Assignment04
* 내용 : 연도를 입력받아 윤년인지 검사하는 프로그램을 작성하시오. 윤년이 된느 조건은 다음과 같다.
* 작성자 : 나영탁
* 날짜 : 2025.04.21
* 버전 : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0504(void);

int main(void)
{
	assignment0504();
	return 0;
}

double assignment0504(void)
{
	int year = 0;
	printf("연도? ");
	scanf("%d", &year);

	if ((year % 4) == 0)
	{
		if ((year % 100) == 0)
		{
			if ((year % 400) == 0)
			{
				printf("%d년은 윤년입니다.");
			}
			else
			{
				printf("%d년은 평년입니다.");
			}
		}
		else
		{
			printf("%d년은 윤년입니다.");
		}
	}
	else
	{
		printf("%d년은 평년입니다.");
	}

	return 0;
}

