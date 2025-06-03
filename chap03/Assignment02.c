/*
* 파일명: Core C Programming 2nd Edition Chap03 Programming Assignment02
* 내용 : 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.04.02
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solution(void)
{
	int g = 0, s = 0;

	printf("가로의 길이? ");
	scanf("%d", &g);
	printf("\n세로의 길이? ");
	scanf("%d", &s);
	printf("\n직사각형의 넓이: %d", g * s);
	printf("\n직사각형의 둘레: %d", 2 * g + 2 * s);

	return;
}

int main(void)
{
	solution();

	return 0;
}

