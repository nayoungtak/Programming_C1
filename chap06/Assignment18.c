/*
* 파일명: Core C Programming 2nd Edition Chap06 Programming Assignment18
* 내용 : 0~999사이의 임의의 정수 3개를 생성하고 divisors 함수를 이용해서 각각의 약수를 출력하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.05.22
* 버전 : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double assignment0618(void);
void divisors(int random);

int main(void)
{
	assignment0618();
	return 0;
}

double assignment0618(void)
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 3; i++)
	{
		int random = rand() % 1000;
		divisors(random);
	}

	return 0;
}

void divisors(int random)
{
	int a = 0;
	printf("%d의 약수: ", random);
	for (int i = 1; i <= random; i++)
	{
		if ((random % i) == 0)
		{
			printf("%d ", i);
			a += 1;
		}
	}
	printf("=> 총 %d개\n", a);
}