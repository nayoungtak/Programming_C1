/*
* ���ϸ�: Core C Programming 2nd Edition Chap07 Programming Assignment06
* ���� : ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷��� �ۼ��Ͻÿ�. �Ǽ��� �迭�� �ʱⰪ�� ������� ���Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.05.30
* ���� : v1.0
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

	printf("�迭: ");
	printArray(arr, arrsize);

	printf("����: ");
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