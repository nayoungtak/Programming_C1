/*
* ���ϸ�: Core C Programming 2nd Edition Chap03 Programming Assignment04
* ���� : ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*        ���� ũ��� N ������ �Է¹ް�, �̵��� �Ÿ��� m ������ �Է¹޴´�.
* �ۼ��� : ����Ź
* ��¥ : 2025.04.03
* ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solution(void)
{
	int N = 0, m = 0;
	double J = 0.0;

	printf("����(kg)?");
	scanf("%d", &N);
	printf("�̵��Ÿ�(m)?");
	scanf("%d", &m);

	J = N * m;
	printf("���� ��: %.2f J", J);

	return;
}

int main(void)
{
	solution();

	return 0;
}