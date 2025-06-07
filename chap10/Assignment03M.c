/*
 파일명: Core C Programming 2nd Edition Chap10 Programming Assignment03
 내용 :
 작성자 : 나영탁
 날짜 : 2025.06.05
 버전 : v5.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Assignment03L.h"

int assignment03(void);


int main(void)
{
	assignment03();

	return 0;
}

int assignment03(void)
{
	Login logins[NUM] = {
	{"guest", "idontknow"},
	{"mirjam4", "147852km**"},
	{"youngtak", "na"},
	{"id1", "pw1"},
	{"id2", "pw2"}
	};
	Login SLogin = {"0", "0"};

	printf("ID? ");
	scanf("%s", SLogin.id);
	printf("Password? ");
	scanf("%s", SLogin.password);

	print_login(logins, SLogin);

	return 0;
}