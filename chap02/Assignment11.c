/*
* ���ϸ�: Core C Programming 2nd Edition Chap02 Proframming Assignment11
* ���� : ������ ���� ���� 3.14159265��� �� ��, ���� ���� ���� ���� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*        �Ҽ��� ���� 2�ڸ�����, �Ҽ��� ���� 4�ڸ�����, �Ҽ��� ���� 6�ڸ�����, �Ҽ��� ���� 8�ڸ����� ���� ����ϰ�,
*        ���� ǥ��ε� ����غ���.
* �ۼ��� : ����Ź
* ��¥ : 2025.03.22
* ���� : v1.0
*/

#include <stdio.h>

void solution(void)
{
	double pi = 3.14159265;
	printf("pi = %.2lf\n", pi);
	printf("pi = %.4lf\n", pi);
	printf("pi = %.6lf\n", pi);
	printf("pi = %.8lf\n", pi);
	printf("pi = %e", pi);

	return;
}

int main(void)
{
	solution();

	return 0;
}