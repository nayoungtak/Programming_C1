
#include <stdio.h>
#include <string.h>
#include "Assignment01L.h"


void print_login(Login l1)
{
	int count = strlen(l1.password);

	printf("ID: %s\n", l1.id);
	printf("PW: ");
	for (int i = 0; i < count; i++)
	{
		printf("*");
	}
	printf("\n");

}