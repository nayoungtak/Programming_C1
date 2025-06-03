/*
* ���ϸ�: Core C Programming 2nd Edition Chap05 Programming Assignment08
* ���� : ��Ʈ ������ �����ϴ� �Ի�⸦ ���α׷��Ͻÿ�.
*		 &�� ��Ʈ AND, |�� ��Ʈ OR, ^�� ��Ʈ XOR������ ó���Ѵ�.
*		 ��Ʈ �����̹Ƿ� ������� �Է¹��� �� 10����, 8����, 16������ ����� �� �ְ� �ϰ�, ������ ����� 16������ ����Ѵ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.04.21
* ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0508(void);

int main(void)
{
	assignment0508();
	return 0;
}

double assignment0508(void)
{
	unsigned int a = 0, b = 0, result = 0;
	char B;

	printf("��Ʈ �����? ");
	scanf("%i %c %i", &a, &B, &b);

	switch (B)
	{
	case '&':
		result = a & b;
		printf("%X %c %X = %X", a, B, b, result);
		break;
	case '|':
		result = a | b;
		printf("%X %c %X = %X", a, B, b, result);
		break;
	case '^':
		result = a ^ b;
		printf("%X %c %X = %X", a, B, b, result);
		break;
	}

	return 0;
}

