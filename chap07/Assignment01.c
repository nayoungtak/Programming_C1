/*
* ���ϸ�: Core C Programming 2nd Edition Chap07 Programming Assignment01
* ���� : ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
		 ù��° ���� ���� ������ �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.05.29
* ���� : v1.0
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

	printf("ù ��° ��? ");
	scanf("%d", &a);
	printf("����? ");
	scanf("%d", &d);

	fillprint(result, a, d);

	return 0;
}

void fillprint(int result[], int a, int d)
{
	result[0] = a;
	printf("��������: %d", result[0]);

	for (int i = 1; i < 10; i++)
	{
		result[i] = a + i * d;
		printf(" %d", result[i]);
	}

	printf("\n");
}