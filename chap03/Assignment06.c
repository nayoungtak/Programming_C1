/*
* 파일명: Core C Programming 2nd Edition Chap03 Programming Assignment06
* 내용 : 아파트의 면적을 제곱미터(m^2)로 입력받아 몇 평인지 출력하는 프로그램을 작성하시오.
*        1m^2는 0.3025평에 해당한다. 프로그램을 작성할 때 이름 있는 상수를 이용해보자.
* 작성자 : 나영탁
* 날짜 : 2025.04.03
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solution(void)
{
	float m = 0.0;
	double P = 0.0;

	printf("아파트의 면적(제곱미터)?");
	scanf("%f", &m);

	P = m * 0.3025;

	printf("%.2f 제곱미터 = %.2f 평", m, P);

	return;
}

int main(void)
{
	solution();
	return 0;
}