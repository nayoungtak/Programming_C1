/*
* 파일명: Core C Programming 2nd Edition Chap04 Programming Assignment08
* 내용 : 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오. 이때 파이는 3.141592라고 하자.
* 작성자 : 나영탁
* 날짜 : 2025.04.09
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double VolumeSphere(double qkswlfma);
int assignment0408(void);

int assignment0408(void)
{
	double qkswlfma = 0.0;
	printf("반지름의 길이? ");
	scanf("%lf", &qkswlfma);

	double result = VolumeSphere(qkswlfma);
	printf("구의 부피: %lf", result);
	return 0;
}

double VolumeSphere(double qkswlfma)
{
	double volume = 0.0;
	volume = 4.0 / 3.0 * 3.141592 * qkswlfma * qkswlfma * qkswlfma;
	return volume;
}

int main(void)
{
	assignment0408();
	return 0;
}