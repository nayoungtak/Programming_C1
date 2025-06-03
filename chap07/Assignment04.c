/*
* 파일명: Core C Programming 2nd Edition Chap07 Programming Assignment04
* 내용 : 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최댓값을 가진 원소와 최솟값을 가진 원소와 찾아서 인덱스와 값을 출력하는 프로그램을 작성하시오.
*		 배열의 초기값은 마음대로 정하시오.
* 작성자 : 나영탁
* 날짜 : 2025.05.29
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment04(void);
void maximum(int arrangement[]);
void minimum(int arrangement[]);

#define SIZE 10

int main(void)
{
	assignment04();

	return 0;
}

int assignment04(void)
{
	int arrangement[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };

	maximum(arrangement);
	minimum(arrangement);

	return 0;
}

void maximum(int arrangement[])
{
	int maxivalue = arrangement[0];
	int maxindex = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (arrangement[i] > maxivalue)
		{
			maxindex = i;
			maxivalue = arrangement[i];
		}
	}

	printf("최댓값: 인덱스=%d, 값=%d\n", maxindex, maxivalue);

}

void minimum(int arrangement[])
{
	int minivalue = arrangement[0];
	int miniindex = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (arrangement[i] < minivalue)
		{
			miniindex = i;
			minivalue = arrangement[i];
		}
	}

	printf("최솟값: 인덱스=%d, 값=%d\n", miniindex, minivalue);

}
