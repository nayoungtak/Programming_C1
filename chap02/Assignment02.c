/*
* ���ϸ�: Core C Programming 2nd Edition Chap02 Proframming Assignment02
* ���� : �л��� ��ȣ�� �й��� �Է¹޾� ���α׷��� �ۼ��Ͻÿ�. �л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.
* �ۼ��� : ����Ź
* ��¥ : 2025.03.22
* ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solution(void)
{
	int num;
	float hak;

	printf("��ȣ?");
	scanf("%d", &num);

	printf("����?");
	scanf("%f", &hak);

	printf("%d�� �л��� ������ %f�Դϴ�\n", num, hak);

	return;
}

int main(void)
{
	solution();

	return 0;
}