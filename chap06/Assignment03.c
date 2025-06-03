/*
* ���ϸ�: Core C Programming 2nd Edition Chap06 Programming Assignment03
* ���� : distance �Լ��� �̿��ؼ� �Է¹��� ���������� ���� ������ ���� �Ÿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.05.20
* ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double assignment0603(void);
double distance(int x1, int y1, int x2, int y2);

int main(void)
{
	assignment0603();
	return 0;
}

double assignment0603(void)
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

	printf("������ ������ ��ǥ? ");
	scanf("%d %d", &x1, &y1);
	printf("������ ���� ��ǥ? ");
	scanf("%d %d", &x2, &y2);

	double distG = distance(x1, y1, x2, y2);
	printf("(%d, %d)~(%d, %d) ���� �Ÿ�: %lf\n", x1, y1, x2, y2, distG);

	return 0;
}

double distance(int x1, int y1, int x2, int y2)
{
	double distG = 0.0;
	distG = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return distG;
}