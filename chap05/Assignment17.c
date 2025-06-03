/*
* 파일명: Core C Programming 2nd Edition Chap05 Programming Assignment17
* 내용 : 주차 시간을 분으로 입력받아서 주차 요금을 계산하는 프로그램을 작성하시오.
* 		 주차 요금은 최초 30분은 2000, 그 이후는 10분당 1000원씩으로 계산하며, 하루 최대 25000원을 넘을 수 없다.
*		 주차 시간은 24시간을 넘을 수는 없다고 가정한다.
* 작성자 : 나영탁
* 날짜 : 2025.04.21
* 버전 : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0517(void);

int main(void)
{
	assignment0517();
	return 0;
}

double assignment0517(void)
{
	int time = 0, fee = 0, min = 0;

	printf("주차 시간(분)? ");
	scanf("%d", &time);
	if (time <= 30)
	{
		fee = 2000;
		printf("주차 요금: %d원\n", fee);
	}
	else
	{
		min = time - 30;
		fee = 2000 + (min / 10) * 1000;
		if ((min % 10) != 0)
		{
			fee += 1000;
		}
		printf("주차 요금: %d원\n", fee);
	}

	return 0;
}