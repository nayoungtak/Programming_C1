/*
* ���ϸ�: Core C Programming 2nd Edition Chap04 Programming Assignment09
* ���� : �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.04.09
* ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0409(void);

int main(void)
{
	assignment0409();
	return 0;
}

int assignment0409(void)
{
	int second = 0;
	printf("����ð�(��)? ");
	scanf("%d", &second);

	int minute = 0, hour = 0, ssecond = 0;
	hour = (second / 3600);
	minute = (second % 3600) / 60;
	ssecond = (second % 3600) % 60;

	printf("����ð��� %d�ð� %d�� %d���Դϴ�.", hour, minute, ssecond);

	return 0;
}

