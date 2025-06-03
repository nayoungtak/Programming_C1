/*
* 파일명: Core C Programming 2nd Edition Chap03 Programming Assignment01
* 내용 : 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그래밍을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.04.02
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solution(void)
{
	int s = 0;

	printf("한 변의 길이 ? ");
	scanf("%d", &s);

	printf("정사각형의 넓이: %d\n", s * s);
	printf("정사각형의 둘레: %d\n", s * 4);

}

int main(void)
{
	solution();

	return 0;
}