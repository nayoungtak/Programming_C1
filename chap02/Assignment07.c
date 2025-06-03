/*
* 파일명: Core C Programming 2nd Edition Chap02 Proframming Assignment07
* 내용 : 커피 사이즈(S,T,G)와 주문 수량을 입력받아 출력하는 프로그램을 작성하시오.
*        커피 사이즈는 S,T,G 세가지 문자 중 하나로 입력받는다.
* 작성자 : 나영탁
* 날짜 : 2025.03.22
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solution(void)
{
	char size;
	int what;

	printf("커피 사이즈(S,T,G)와 수문 수량? ");
	scanf("%c %d", &size, &what);

	printf("%c 사이즈 %d잔을 주문합니다.\n", size, what);

	return;
}

int main(void)
{
	solution();

	return 0;
}