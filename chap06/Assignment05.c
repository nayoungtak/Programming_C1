/*
* ���ϸ�: Core C Programming 2nd Edition Chap06 Programming Assignment05
* ���� : ���ڷ� ���޹��� ������ ¦������ �˻��ϴ� is_even �Լ��� Ȧ������ �˻��ϴ� is_odd �Լ��� �ۼ��Ͻÿ�.
*		 �� �Ѽ��� �̿��ؼ� 0�� �Էµ� ������ �Էµ� �����鿡 ���ؼ� ¦���� ������ Ȧ���� ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.05.20
* ���� : v3.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double assignment0605(void);
int is_even(int n);
int is_odd(int n);

int main(void)
{
	assignment0605();
	return 0;
}

double assignment0605(void)
{
	int integer = 0;
	int Even = 0;
	int Odd = 0;
	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");
	while (1)
	{
		scanf("%d", &integer);
		if (integer == 0)
		{
			printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d�� �Դϴ�.", Even, Odd);
			return 0;
		}
		Even += is_even(integer);
		Odd += is_odd(integer);
	}
	return 0;
}

int is_even(int integer)
{
	if (integer % 2 == 0)
	{
		return 1;
	}
	return 0;
}

int is_odd(int integer)
{
	if (integer % 2 != 0)
	{
		return 1;
	}
	return 0;
}