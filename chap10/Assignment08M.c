/*
 ���ϸ�: Core C Programming 2nd Edition Chap10 Programming Assignment08
 ���� : Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� �����Ͻÿ�.
		�� ��ǰ���� ��ǰ��, ����, ��� ������ �� �־�� �Ѵ�.
		PRODUCT ����ü�� �Ű������� ���޹޾� ��ǰ ������ ����ϴ� print_product �Լ��� �����Ͻÿ�.
		PRODUCT ����ü ������ ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		����� ��ǰ���� ��ĭ ���� �� �ܾ�� �Է��Ѵ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.06.07
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Assignment08P.h"

int assignment08(void);


int main(void)
{
	assignment08();

	return 0;
}

int assignment08(void)
{
	Product p1 = {"0", 0, 0};
	
	printf("��ǰ��? ");
	scanf("%s", p1.name);
	printf("����? ");
	scanf("%d", &p1.price);
	printf("���? ");
	scanf("%d", &p1.stock);

	print_product(p1);

	return 0;
}