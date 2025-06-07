
#include <stdio.h>
#include <string.h>
#include "Assignment03L.h"


void print_login(Login logins[], Login SLogin)
{
	int success = 0;

	for (int i = 0; i < 3; i++) {
		if (comparison_login(logins[i], SLogin)) {
			success = 1;
			break;
		}
	}

	if (success)
		printf("로그인 성공\n");
	else
		printf("로그인 실패\n");
}

int comparison_login(Login log, Login SLogin)
{
	if (strcmp(log.id, SLogin.id) == 0 && strcmp(log.password, SLogin.password) == 0)
		return 1;
	else
		return 0;
}
