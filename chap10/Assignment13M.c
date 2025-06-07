/*
 파일명: Core C Programming 2nd Edition Chap10 Programming Assignment01
 내용 :
 작성자 : 나영탁
 날짜 : 2025.06.00
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Assignment13R.h"

int assignment01(void);


int main(void)
{
	assignment01();

	return 0;
}

int assignment01(void)
{
	RECT leftB = { 0 };
	RECT rightT = { 0 };

	printf("직사각형의 좌하단점(x,y)? ");
	scanf("%d %d", &leftB.x, &leftB.y);
	printf("직사각형의 우상단점(x,y)? ");
	scanf("%d %d", &rightT.x, &rightT.y);

	print_rect(leftB, rightT);

	return 0;
}