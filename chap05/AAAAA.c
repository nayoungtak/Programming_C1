/*
* ���ϸ�: Core C Programming 2nd Edition Chap00 Programming Assignment00
* ���� :
* �ۼ��� : ����Ź
* ��¥ : 2025.00.00
* ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0000(void);

int main(void)
{
	assignment0000();
	return 0;
}

double assignment0000(void)
{
	int n = 3;
	if (n > 0)
	{
		n *= 2;
		if (n < 5)
		{
			n += 5;
		}
		else
		{
			n -= 5;
		}
	}
	else
	{
		n++;
	}
	printf("n = %d\n", n);

	return 0;
}

