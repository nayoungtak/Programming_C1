/*
* ���ϸ�: Core C Programming 2nd Edition Chap06 Programming Assignment18
* ���� : 0~999������ ������ ���� 3���� �����ϰ� divisors �Լ��� �̿��ؼ� ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.05.22
* ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double assignment0618(void);
void divisors(int random);

int main(void)
{
	assignment0618();
	return 0;
}

double assignment0618(void)
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 3; i++)
	{
		int random = rand() % 1000;
		divisors(random);
	}

	return 0;
}

void divisors(int random)
{
	int a = 0;
	printf("%d�� ���: ", random);
	for (int i = 1; i <= random; i++)
	{
		if ((random % i) == 0)
		{
			printf("%d ", i);
			a += 1;
		}
	}
	printf("=> �� %d��\n", a);
}