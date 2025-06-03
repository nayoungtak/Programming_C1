/*
* 파일명: Core C Programming 2nd Edition Chap04 Programming Assignment00
* 내용 :
* 작성자 : 나영탁
* 날짜 : 2025.04.00
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0000(void);

int main(void)
{
	assignment0000();
	return 0;
}

double assignment0000(void)
{
	int a = 0;
	printf("재생시간(초)? ");
	scanf("%d", &a);

	printf("%d입니다.", a);

	return 0;
}

