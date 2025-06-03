
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
	Contact c1 = { "È«±æµ¿", "01027780298", MAN, 2025 };
	Contact c2 = { "È«±æµ¿", "01027780298", MAN, 2025 };
	Contact c3 = { "±è±æµ¿", "01027780298", MAN, 2025 };
	Contact c4 = { "³ª¿µÅ¹", "01027497163", MAN, 2006 };


	printContact(c1);
	printContactPTR(&c2);

	int result1 = ifEualcontact(c1, c2);
	int result2 = ifEualcontactPTR(&c2, &c3);

	printf("c1°ú c2´Â %s\n", result1 ? "°°½À´Ï´Ù." : "´Ù¸¨´Ï´Ù.");
	printf("c2°ú c3´Â %s\n", result2 ? "°°½À´Ï´Ù." : "´Ù¸¨´Ï´Ù.");
}