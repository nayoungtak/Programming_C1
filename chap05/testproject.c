
#include <stdio.h>


void f1(void);
int f3(int a, int b);
double f5(double a, int b);


int main(void)
{
	int x = 3;
	f1();
	int result = f3(2, 3);

	return 1;
}

int assignment0501(void)
{
	return;
}

void f1(void)
{
	// hello ���
	printf("hello");
	return;
}

/*
* �Լ���: int f3(int a, int b)
* ���: �Է��� �� �� a, b�� ���ؼ� ��ȯ
* �Է�: a, b�� ����
* ��ȯ: ����
*/
int f3(int a, int b)
{
	int result = 0;
	// �� ���� ���ؼ� ��ȯ
	result = a + b;
	return result;
}

double f5(double a, int b)
{
	return 0;
}
