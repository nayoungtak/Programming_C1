/*
* ���ϸ�: Core C Programming 2nd Edition Chap03 Programming Assignment03
* ���� : ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*        ������ kg����, ���̴� m ������ �Է¹޴´�.
* �ۼ��� : ����Ź
* ��¥ : 2025.04.02
* ���� : v3.0 - HyoWon's help
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calcPositionEnergy(int weight, int height)
{
	double n = 9.8 * weight * height;
	// printf("��ġ������: %lf J", n);
	return n;
}

void assignment0303(void)
{
	int weight = 0, height = 0;
	printf("����(kg)? ");
	scanf("%d", &weight);
	printf("����(m)? ");
	scanf("%d", &height);
	printf("��ġ������: %lf J", calcPositionEnergy(weight, height));
	//calcPositionEnergy(weight, height);
}

int main(void)
{
	assignment0303();

	return 0;
}

