/*
* ���ϸ�: Core C Programming 2nd Edition Chap03 Programming Assignment07
* ���� : �Ǽ����� �Է¹޾� �� ���� ������ �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*        �Ǽ����� �Է¹��� ���� 12.34ó�� �Ҽ� ǥ�� ����̳� 1.234e2ó�� ���� ǥ�� ����� �� �� ����� �� �ְ�
*        �ϰ� ������ �������� ����� ���� ���� ǥ�� ������� ����Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.04.03
* ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solution(void)
{
	double si = 0.0;
	printf("�Ǽ�? ");
	scanf("%lf", &si);
	printf("����: %e\n", si * si);

	printf("������: %e", si * si * si);

	return;
}

int main(void)
{
	solution();
	return 0;
}