/*
* 파일명: Core C Programming 2nd Edition Chap07 Programming Assignment06
* 내용 : 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램을 작성하시오. 실수형 배열의 초기값은 마음대로 정하시오.
* 작성자 : 나영탁
* 날짜 : 2025.05.30
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment06(void);
void reverse(double arr[], int arrsize);
void printArray(double arr[], int size);


int main(void)
{
	assignment06();

	return 0;
}

int assignment06(void)
{
	double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	int arrsize = sizeof(arr) / sizeof(arr[0]);

	printf("배열: ");
	printArray(arr, arrsize);

	printf("역순: ");
	reverse(arr, arrsize);
	printArray(arr, arrsize);

	return 0;
}

void reverse(double arr[], int arrsize)
{
	for (int i = 0; i < (arrsize / 2); i++)
	{
		double a = arr[i];
		arr[i] = arr[arrsize - 1 - i];
		arr[arrsize - 1 - i] = a;
	}
}

void printArray(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%.1lf ", arr[i]);
	}
	printf("\n");
}