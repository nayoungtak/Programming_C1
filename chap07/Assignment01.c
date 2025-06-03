/*
* 파일명: Core C Programming 2nd Edition Chap07 Programming Assignment01
* 내용 : 크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다.
		 첫번째 항의 값과 공차를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.05.29
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment01(void);
void fillprint(int result[], int a, int d);


int main(void)
{
	assignment01();

	return 0;
}

int assignment01(void)
{
	int result[10] = { 0 };
	int a = 0, d = 0;

	printf("첫 번째 항? ");
	scanf("%d", &a);
	printf("공차? ");
	scanf("%d", &d);

	fillprint(result, a, d);

	return 0;
}

void fillprint(int result[], int a, int d)
{
	result[0] = a;
	printf("등차수열: %d", result[0]);

	for (int i = 1; i < 10; i++)
	{
		result[i] = a + i * d;
		printf(" %d", result[i]);
	}

	printf("\n");
}