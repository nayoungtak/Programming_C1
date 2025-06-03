/*
* 파일명: Core C Programming 2nd Edition Chap05 Programming Assignment01
* 내용 : 점의 좌표(x,y)를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램을 작서하시오.
* 작성자 : 나영탁
* 날짜 : 2025.04.21
* 버전 : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0501(void);

int main(void)
{
	assignment0501();
	return 0;
}

double assignment0501(void)
{
	int left = 0, top = 0, right = 0, bottom = 0;
	int x = 0, y = 0;

	printf("선택 영역의 좌상단점(left, top)? ");
	scanf("%d %d", &left, &top);
	printf("선택 영역의 우하단점(right, bottom)? ");
	scanf("%d %d", &right, &bottom);
	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);

	if (left < x < right && top < y < bottom)
	{
		printf("직사각형 모양의 선택 영역 내의 점입니다.");
	}
	else
	{
		printf("직사각형 모양의 선택 영역 외의 점입니다.");
	}

	return 0;
}

