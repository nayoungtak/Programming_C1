/*
* ���ϸ�: Core C Programming 2nd Edition Chap06 Programming Assignment06
* ���� : �߸��� ��ȣ�� �����ϸ� �ùٸ� ��ȣ�� ������ ������ ��� �޴��� ����ϰ� �ٽ� ���ù޾ƾ� �Ѵ�.
*		 ��, choose_menu �Լ��� �ݵ�� 0~3������ ���� �����ؾ� �Ѵ�.
*		 choose_menu�� ���ϰ��� ���� � �޴��� ���õǾ����� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.05.22
* ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0606(void);
int choose_menu(void);
int sun = 20;

int main(void)
{
	assignment0606();
	return 0;
}

double assignment0606(void)
{
	while (1)
	{
		sun = choose_menu();
		switch (sun)
		{
		case 0:
			break;
		case 1:
			printf("���� ���⸦ �����մϴ�.\n");
			continue;
		case 2:
			printf("���� ���带 �����մϴ�.\n");
			continue;
		case 3:
			printf("�μ⸦ �����մϴ�.\n");
			continue;
		default:
			printf("�ߺ��� ��ȣ�� �����߽��ϴ�.\n");
			continue;
		}
		break;
	}
	printf("����");

	return 0;
}

int choose_menu(void)
{
	printf("[1.���� ���� 2.���� ���� 3.�μ� 0.����] ����? ");
	scanf("%d", &sun);

	return sun;
}