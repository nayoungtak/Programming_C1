/*
* ���ϸ�: Core C Programming 2nd Edition Chap06 Programming Assignment01
* ���� : get_perimeter �Լ��� �̿��ؼ� �Է¹��� ����, ������ ���̷� ���簢���� �ѷ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.05.20
* ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0601(void);
int get_perimeter(int width, int length);

int main(void)
{
	assignment0601();
	return 0;
}

double assignment0601(void)
{
	int width = 0, length = 0;

	printf("����? ");
	scanf("%d", &width);
	printf("����? ");
	scanf("%d", &length);

	int perimeter = get_perimeter(width, length);
	printf("���簢���� �ѷ�: %d\n", perimeter);

	return 0;
}

int get_perimeter(int width, int length)
{
	int perimeter = 0;
	perimeter = (width + length) * 2;
	return perimeter;
}