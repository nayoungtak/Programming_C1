/*
* ���ϸ�: Core C Programming 2nd Edition Chap05 Programming Assignment10
* ���� : �ڵ��� ��� ��꼭�� ���� "10�� �̸� ����"���� ǥ���� �� �� �ִ�.
*		 �ݾװ� ���� ������ �Է¹޾� ���� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*		 ���� ������ 10^0, 10^1, 10^2ó�� 10�� �ŵ������� �Է¹޾ƾ� �Ѵ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.04.21
* ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0510(void);

int main(void)
{
	assignment0510();
	return 0;
}

double assignment0510(void)
{
	int money = 0, jul = 0, a = 1;

	printf("�ݾ�? ");
	scanf("%d", &money);
	printf("������� (10�� ������)? ");
	scanf("%d", &jul);

	if (jul < 0)
	{
		printf("���� ������ 10�� ���������� �Է��ؾ� �մϴ�.");
		return 0;
	}

	int i = 0;
	while (i < jul)
	{
		i++;
		a = a * 10;
	}

	money = money - (money % a);
	printf("�ݾ�(%d �̸� ����): %d\n", a, money);

	return 0;
}

