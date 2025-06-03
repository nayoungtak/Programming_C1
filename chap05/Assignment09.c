/*
* ���ϸ�: Core C Programming 2nd Edition Chap05 Programming Assignment09
* ���� : �ܹ��� ������ ��꼭 ���α׷��� �ۼ��Ͻÿ�.
*		 �ܹ���, �ݶ�, ����Ƣ���� ������ �Է¹޾Ƽ� �ִ��� ��Ʈ�� �����ϰ� �������� ��ǰ���� ����ϵ��� �Ѵ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.04.21
* ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0509(void);

int main(void)
{
	assignment0509();
	return 0;
}

double assignment0509(void)
{
	int Ham = 0, Gam = 0, Co = 0, set = 0;

	printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");
	printf("�ܹ��� ����? ");
	scanf("%d", &Ham);
	printf("����Ƣ�� ����? ");
	scanf("%d", &Gam);
	printf("�ݶ� ����? ");
	scanf("%d", &Co);

	while (Ham > 0 && Gam > 0 && Co > 0)
	{
		Ham--;
		Gam--;
		Co--;
		set++;
	}

	printf("\n��ǰ��      �ܰ�   ����   �ݾ�\n");
	if (set > 0)
	{
		printf("��Ʈ      %6d %4d  %7d\n", 6500, set, (set * 6500));
	}
	if (Ham > 0)
	{
		printf("�ܹ���    %6d %4d  %7d\n", 4000, Ham, (Ham * 4000));
	}
	if (Gam > 0)
	{
		printf("����Ƣ��  %6d %4d  %7d\n", 2000, Gam, (Gam * 2000));
	}
	if (Co > 0)
	{
		printf("�ݶ�      %6d %4d  %7d\n", 1500, Co, (Co * 1500));
	}
	printf("--------------------------------\n");
	int sum = (set * 6500) + (Ham * 4000) + (Gam * 2000) + (Co * 1500);
	printf("�հ� %25d\n", sum);

	return 0;
}

