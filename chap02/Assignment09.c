/*
* ���ϸ�: Core C Programming 2nd Edition Chap02 Proframming Assignment09
* ���� : 16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.03.22
* ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solution(void)
{
	int a;

	printf("16���� ����? ");
	scanf("%x", &a);

	printf("16���� %x�� 10������ %d�Դϴ�\n", a, a);

	return;
}

int main(void)
{
	solution();

	return 0;
}