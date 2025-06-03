/*
* ���ϸ�: Core C Programming 2nd Edition Chap07 Programming Assignment04
* ���� : Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ��� ���� ���ҿ� �ּڰ��� ���� ���ҿ� ã�Ƽ� �ε����� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*		 �迭�� �ʱⰪ�� ������� ���Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.05.29
* ���� : v1.0
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

	printf("�ִ�: �ε���=%d, ��=%d\n", maxindex, maxivalue);

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

	printf("�ּڰ�: �ε���=%d, ��=%d\n", miniindex, minivalue);

}
