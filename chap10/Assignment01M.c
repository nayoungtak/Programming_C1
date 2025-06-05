/*
 파일명: Core C Programming 2nd Edition Chap10 Programming Assignment01 Main
 내용 : 인터넷 사이트에 로그인할때 사용되는 아이디와 패스워드를 관리하기 Z위한 LOGIN 구조체를 정의하시오.
		아이디와 패스워드는 각각 최대 20글자까지 입력할 수 있다.
		LOGIN 구조체 변수를 선언한 다음 아이디와 패스워드를 입력받아 저장하고 출력하는 프로그램을 작성하시오.
		패스워드를 출력할 때는 패스워드의 내용은 보이지 않도록 패스워드 글자 수만큼 *을 대신 출력하시오.
 작성자 : 나영탁
 날짜 : 2025.06.05
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Assignment01L.h"

int assignment01(void);


int main(void)
{
	assignment01();

	return 0;
}

int assignment01(void)
{
	Login l1;

	printf("ID? ");
	scanf("%s", l1.id);
	printf("Password? ");
	scanf("%s", l1.password);

	print_login(l1);

	return 0;
}