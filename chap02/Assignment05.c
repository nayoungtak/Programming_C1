/*
* 파일명: Core C Programming 2nd Edition Chap02 Proframming Assignment05
* 내용 : 몸무게를 입력받아서 출력하는 프로그래밍을 작성하시오. 몸무게는 실수로 입력받으며, 소수점 이하 2자리까지만 출력한다.
* 작성자 : 나영탁
* 날짜 : 2025.03.22
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solution(void)
{
	float weight;

	printf("몸무게? ");
	scanf("%f", &weight);

	printf("입력한 몸무게는 %.2fkg입니다.\n", weight);

	return;
}

int main(void)
{
	solution();

	return 0;
}