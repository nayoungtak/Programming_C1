/*
* ���ϸ�: Core C Programming 2nd Edition Chap04 Programming Assignment02
* ���� : ȭ�� �µ�(')
* �ۼ��� : ����Ź
* ��¥ : 2025.04.09
* ���� : v2.0
*/

double FahrenheitCelsius();
int assignment0402(void);

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int rufrhk = assignment0402();
	return rufrhk;
}

double FahrenheitCelsius(double f)
{
	double c = 0.0;
	c = (f - 32) * 5 / 9;
	return c;
}

int assignment0402(void)
{
	double f = 0.0;
	printf("ȭ���µ�? ");
	scanf("%lf", &f);

	double result = FahrenheitCelsius(f);

	printf("%.2lf F = %.2lf C", f, result);
	return 0;
}