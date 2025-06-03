/*
* 파일명: Core C Programming 2nd Edition Chap05 Programming Assignment09
* 내용 : 햄버거 가게의 계산서 프로그램을 작성하시오.
*		 햄버거, 콜라, 감자튀김의 수량을 입력받아서 최대한 세트로 구성하고 나머지는 단품으로 계산하도록 한다.
* 작성자 : 나영탁
* 날짜 : 2025.04.21
* 버전 : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0509(void);

int main(void)
{
	assignment0509();
	return 0;
}

double assignment0509(void)
{
	int Ham = 0, Gam = 0, Co = 0, set = 0;

	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");
	printf("햄버거 개수? ");
	scanf("%d", &Ham);
	printf("감자튀김 개수? ");
	scanf("%d", &Gam);
	printf("콜라 개수? ");
	scanf("%d", &Co);

	while (Ham > 0 && Gam > 0 && Co > 0)
	{
		Ham--;
		Gam--;
		Co--;
		set++;
	}

	printf("\n상품명      단가   수량   금액\n");
	if (set > 0)
	{
		printf("세트      %6d %4d  %7d\n", 6500, set, (set * 6500));
	}
	if (Ham > 0)
	{
		printf("햄버거    %6d %4d  %7d\n", 4000, Ham, (Ham * 4000));
	}
	if (Gam > 0)
	{
		printf("감자튀김  %6d %4d  %7d\n", 2000, Gam, (Gam * 2000));
	}
	if (Co > 0)
	{
		printf("콜라      %6d %4d  %7d\n", 1500, Co, (Co * 1500));
	}
	printf("--------------------------------\n");
	int sum = (set * 6500) + (Ham * 4000) + (Gam * 2000) + (Co * 1500);
	printf("합계 %25d\n", sum);

	return 0;
}

