/*
* ���ϸ�: Core C Programming 2nd Edition Chap06 Programming Assignment19
* ���� : ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� graph �Լ��� �ۼ��Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.05.22
* ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Scale 100	

double assignment0619(void);
void graph(int in, int scale);

int main(void)
{
	assignment0619();

	return 0;
}

double assignment0619(void)
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 3; i++)
	{
		int random = rand() % 10000;
		graph(random, Scale);
	}

	return 0;
}

void graph(int in, int scale)
{
	int mok = in / scale;
	printf("%d:", in);
	for (int i = 0; i < mok; i++)
	{
		printf("%c", '*');
	}
	printf("\n");
	return 0;
}