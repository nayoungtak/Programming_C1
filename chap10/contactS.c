#include <stdio.h>
#include <string.h>
#include "contactS.h"

// ifEqualContact()
// ��ȯ�� : ���� ������ 1 (True) ��ȯ, �׷��� ������ 0�� ��ȯ
// �Է� : ���� �� Contact ��

int ifEualcontact(Contact a, Contact b)
{
	if (a.year == b.year && a.gender == b.gender &&
		strcmp(a.name, b.name) == 0 &&
		strcmp(a.phone, b.phone) == 0)
	{
		return 1;
	}

	return 0;
}

void printContact(Contact ct)
{
	// �̸� : 000
	// ���� : 00000000
	// ���� : �� �Ǵ� ��
	// ���� : 0000

	printf("�̸� : %s \n", ct.name);
	printf("���� : %s \n", ct.phone);
	printf("���� : %s \n", ct.gender == MAN ? "����" : "����");
	printf("���� : %4d \n", ct.year);
}

int ifEualcontactPTR(const Contact* a, const Contact* b)
{
	if (a->year == b->year && a->gender == b->gender &&
		strcmp(a->name, b->name) == 0 &&
		strcmp(a->phone, b->phone) == 0)
	{
		return 1;
	}

	return 0;
}

void printContactPTR(const Contact* ct)
{
	// �̸� : 000
	// ���� : 00000000
	// ���� : �� Ȥ ��
	// ���� : 0000

	printf("�̸� : %s \n", ct->name);
	printf("���� : %s \n", ct->phone);
	printf("���� : %s \n", ct->gender == MAN ? "����" : "����");
	printf("���� : %4d \n", ct->year);
}