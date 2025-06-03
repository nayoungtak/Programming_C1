/*
* ���ϸ�: Core C Programming 2nd Edition Chap04 Programming Assignment01
* ���� : ������ �ӷ��� �Ǽ��� �Է¹޾� � �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*        ������ kg����, �ӷ��� m/s ������ �Է¹޴´�.
* �ۼ��� : ����Ź
* ��¥ : 2025.04.09
* ���� : v2.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int r = assignment0401();

	return r;
}

/*
* �Լ��� : getMotionEnergy()
* ���(å��) : ����, �ӷ� �Է¹޾� ��������� ����Ͽ� ��ȯ
* �Է� : ����(kg), �ӷ�(m/s)
* ��ȯ : �������
*/
double getMotionEnergy(double weight, double velocity)
{
	double energy = 0.0;
	//������ = 1/2 * ���� * �ӵ� * �ӵ�
	energy = 1.0 / 2.0 * weight * velocity * velocity;
	return energy;
}

/*
* �Լ��� : assignment0401()
* ���(å��) : ����, �ӷ��� �Է¹���, ��������� ����ϵ��� �Լ�ȣ��, �� ����� �ֿܼ� �Է�
* �Է� : ����
* ��ȯ : �����̸� 0�̸� ����, �׿� ���� �����̴�.
*/
int assignment0401(void)
{
	//1. ����, �ӵ� �Է� �޾� ����
	double w = 0.0, v = 0.0;
	printf("����(kg) �ӵ�(m/s)�� �Է��� �ּ���:");
	scanf("%lf %lf", &w, &v);

	//2. ������� ���
	double result = getMotionEnergy(w, v);

	//3. ���� ������� ���
	printf("����: %.2lf(kg) �ӵ�: %.2lf(m/s) �������: %.2lf J", w, v, result);
	return 0;
}
