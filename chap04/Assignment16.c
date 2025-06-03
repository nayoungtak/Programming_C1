/*
* 파일명: Core C Programming 2nd Edition Chap04 Programming Assignment16
* 내용 : 0~255사이의 값을 red, green, blue의 순서로 3개 입력받아서 RGB색상을 만들어서 출력하는 프로그램을 작성하시오.
*		 RGB 색상을 출력할 때 바이트 단위로 값을 알아보기 쉽도록 16진수로 출력한다.
* 작성자 : 나영탁
* 날짜 : 2025.04.09
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0416(void);

int main(void)
{
	assignment0416();
	return 0;
}

int assignment0416(void)
{
	unsigned char red = 0, green = 0, blue = 0;
	int rgb_color = 0;

	printf("red? ");
	scanf("%hhu", &red);
	printf("green? ");
	scanf("%hhu", &green);
	printf("blue? ");
	scanf("%hhu", &blue);

	rgb_color = red | green << 8 | blue << 16;

	printf("RGB 트루컬러: %06X", rgb_color);

	return 0;
}

