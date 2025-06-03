/*
* 파일명: Core C Programming 2nd Edition Chap06 Programming Assignment06
* 내용 : 잘못된 번호를 선택하면 올바른 번호를 선택할 때까지 계속 메뉴를 출력하고 다시 선택받아야 한다.
*		 즉, choose_menu 함수는 반드시 0~3사이의 값을 리턴해야 한다.
*		 choose_menu의 리턴값에 따라 어떤 메뉴가 선택되었는지 간단히 출력하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.05.22
* 버전 : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0606(void);
int choose_menu(void);
int sun = 20;

int main(void)
{
	assignment0606();
	return 0;
}

double assignment0606(void)
{
	while (1)
	{
		sun = choose_menu();
		switch (sun)
		{
		case 0:
			break;
		case 1:
			printf("파일 열기를 수행합니다.\n");
			continue;
		case 2:
			printf("파일 저장를 수행합니다.\n");
			continue;
		case 3:
			printf("인쇄를 수행합니다.\n");
			continue;
		default:
			printf("잘봇된 번호를 선택했습니다.\n");
			continue;
		}
		break;
	}
	printf("종료");

	return 0;
}

int choose_menu(void)
{
	printf("[1.파일 열기 2.파일 저장 3.인쇄 0.종료] 선택? ");
	scanf("%d", &sun);

	return sun;
}