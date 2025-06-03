/*
* 파일명: Core C Programming 2nd Edition Chap02 Proframming Assignment09
* 내용 : 16진수 정수를 입력받아 10진수로 출력하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.03.22
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solution(void)
{
	int a;

	printf("16진수 정수? ");
	scanf("%x", &a);

	printf("16진수 %x는 10진수로 %d입니다\n", a, a);

	return;
}

int main(void)
{
	solution();

	return 0;
}