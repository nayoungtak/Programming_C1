/*
 ���ϸ�: Core C Programming 2nd Edition Chap10 Programming Assignment01 Main
 ���� : ���ͳ� ����Ʈ�� �α����Ҷ� ���Ǵ� ���̵�� �н����带 �����ϱ� Z���� LOGIN ����ü�� �����Ͻÿ�.
		���̵�� �н������ ���� �ִ� 20���ڱ��� �Է��� �� �ִ�.
		LOGIN ����ü ������ ������ ���� ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		�н����带 ����� ���� �н������� ������ ������ �ʵ��� �н����� ���� ����ŭ *�� ��� ����Ͻÿ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.06.05
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Assignment01L.h"

int assignment01(void);


int main(void)
{
	assignment01();

	return 0;
}

int assignment01(void)
{
	Login l1;

	printf("ID? ");
	scanf("%s", l1.id);
	printf("Password? ");
	scanf("%s", l1.password);

	print_login(l1);

	return 0;
}