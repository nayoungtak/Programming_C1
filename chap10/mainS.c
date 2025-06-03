
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contactS.h"

void testContact();


int main(void)
{
	testContact();

	return 0;
}

void testContact()
{
	Contact c1 = { "ȫ�浿", "01027780298", MAN, 2025 };
	Contact c2 = { "ȫ�浿", "01027780298", MAN, 2025 };
	Contact c3 = { "��浿", "01027780298", MAN, 2025 };
	Contact c4 = { "����Ź", "01027497163", MAN, 2006 };


	printContact(c1);
	printContactPTR(&c2);

	int result1 = ifEualcontact(c1, c2);
	int result2 = ifEualcontactPTR(&c2, &c3);

	printf("c1�� c2�� %s\n", result1 ? "�����ϴ�." : "�ٸ��ϴ�.");
	printf("c2�� c3�� %s\n", result2 ? "�����ϴ�." : "�ٸ��ϴ�.");
}