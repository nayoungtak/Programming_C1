/*
* ���ϸ�: Core C Programming 2nd Edition Chap04 Programming Assignment08
* ���� : �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. �̶� ���̴� 3.141592��� ����.
* �ۼ��� : ����Ź
* ��¥ : 2025.04.09
* ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double VolumeSphere(double qkswlfma);
int assignment0408(void);

int assignment0408(void)
{
	double qkswlfma = 0.0;
	printf("�������� ����? ");
	scanf("%lf", &qkswlfma);

	double result = VolumeSphere(qkswlfma);
	printf("���� ����: %lf", result);
	return 0;
}

double VolumeSphere(double qkswlfma)
{
	double volume = 0.0;
	volume = 4.0 / 3.0 * 3.141592 * qkswlfma * qkswlfma * qkswlfma;
	return volume;
}

int main(void)
{
	assignment0408();
	return 0;
}