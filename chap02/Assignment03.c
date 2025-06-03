/*
* 파일명 : Core C Programming 2nd Edition Chap02 Proframming Assignment03
* 내용 : 날짜를 연, 월, 일로 입력받아서 출력하는 프로그램을 작성하시오. 연, 월, 일은 정수로 입력받는다.
* 작성자 : 나영탁
* 날짜 : 2025.03.22
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solution(void)
{
	int  year;
	int war;
	int day;

	printf("연? ");
	scanf("%d", &year);

	printf("월? ");
	scanf("%d", &war);

	printf("일? ");
	scanf("%d", &day);

	printf("입력한 날짜는 %d년 %d월 %d일입니다.", year, war, day);

	return;
}

int main(void)
{
	solution();

	return 0;
}