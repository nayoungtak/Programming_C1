/*
* ���ϸ�: Core C Programming 2nd Edition Chap07 Programming Assignment01
* ���� : ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
		 ù��° ���� ���� ������ �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.05.21
* ���� : v1.0 - SONG_professor
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment01(void);
void printArray(int arr[], int size);
void fillCD(int arr[], int size, int start, int diff);

#define ARR_SIZE 10


int main(void)
{
	return assignment01();
}

int assignment01(void)
{
	int result[10] = { 0 };
	int start = 0, diff = 0;

	printf("�ʱⰪ ���� �Է��ϼ���: ");
	scanf("%d %d", &start, &diff);
	// �ʱⰪ ���� �� �ޱ�

	fillCD(result, ARR_SIZE, start, diff);
	printArray(result, ARR_SIZE);

}

void printArray(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++) //arr[0]���� i�� size���� Ŀ���� ������ i�� 1�� ���Ѵ�.
	{
		printf("%d ", arr[i]); //arr[0]���� ��� i�� size���� ��������
	}
	printf("\n");
}

void fillCD(int arr[], int size, int start, int diff)
{
	// arr[] = �������� ����, size = �������� ����, start = �ʱⰪ, diff = ����
	int i;

	arr[0] = start;
	// arr[0] �ڸ��� �ʱⰪ �Է�

	for (i = 1; i < size; i++) 	// 0���� size���� ���������� i�� 1�� ���Ѵ�
	{
		arr[i] = arr[i - 1] + diff;
		// arr[i]�ڸ��� arr[i-1] + ����
	}
}