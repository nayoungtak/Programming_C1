/*
 ���ϸ�: Core C Programming 2nd Edition Chap10 Programming Assignment01
 ���� :
 �ۼ��� : ����Ź
 ��¥ : 2025.06.00
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Assignment13R.h"

int assignment01(void);


int main(void)
{
	assignment01();

	return 0;
}

int assignment01(void)
{
	RECT leftB = { 0 };
	RECT rightT = { 0 };

	printf("���簢���� ���ϴ���(x,y)? ");
	scanf("%d %d", &leftB.x, &leftB.y);
	printf("���簢���� ������(x,y)? ");
	scanf("%d %d", &rightT.x, &rightT.y);

	print_rect(leftB, rightT);

	return 0;
}