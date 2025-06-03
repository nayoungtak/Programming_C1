/*
* 파일명: Core C Programming 2nd Edition Chap06 Programming Assignment01
* 내용 : get_perimeter 함수를 이용해서 입력받은 가로, 세로의 길이로 직사각형의 둘레를 계산하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.05.20
* 버전 : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0601(void);
int get_perimeter(int width, int length);

int main(void)
{
	assignment0601();
	return 0;
}

double assignment0601(void)
{
	int width = 0, length = 0;

	printf("가로? ");
	scanf("%d", &width);
	printf("세로? ");
	scanf("%d", &length);

	int perimeter = get_perimeter(width, length);
	printf("직사각형의 둘레: %d\n", perimeter);

	return 0;
}

int get_perimeter(int width, int length)
{
	int perimeter = 0;
	perimeter = (width + length) * 2;
	return perimeter;
}