/*
* 파일명: Core C Programming 2nd Edition Chap04 Programming Assignment15
* 내용 : 환전수수료율은 1.75%로 정해져 있다고 가정하고 원-달러 매매기준율과 환전우대율(%)를 입력받아 달러를 살 때
*		 적용되는 환율을 결정하고, 구입하고자 하는 달러가 얼마인지 입력받아서 몇 원에 해당하는지 출력하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.04.09
* 버전 : v2.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0415(void);
double ExchangR_W_B_Dollars(double T_B_R_, double P_E_R_);
double CalculationOfDollars(double usd, double ER);

int main(void)
{
	assignment0415();
	return 0;
}

int assignment0415(void)
{
	double T_B_R_ = 0, P_E_R_ = 0, usd = 0;
	printf("원/달러 매매기준율? ");
	scanf("%lf", &T_B_R_);

	printf("환전우대율(0~100%)? ");
	scanf("%lf", &P_E_R_);

	double ER = ExchangR_W_B_Dollars(T_B_R_, P_E_R_);
	printf("달러 살 때 환율은 %lf입니다\n", ER);

	printf("구입할 달러(USD)? ");
	scanf("%lf", &usd);

	double KRW = CalculationOfDollars(usd, ER);
	printf("USD %.2lf 살때 ==> KRW %.2lf\n", usd, KRW);

	return 0;
}

double ExchangR_W_B_Dollars(double T_B_R_, double P_E_R_)
{
	double ER1 = T_B_R_ + (T_B_R_ * (1.75 / 100) * (1.0 - P_E_R_ / 100.0));
	return ER1;
}

double CalculationOfDollars(double usd, double ER)
{
	double KRW1 = usd * ER;
	return KRW1;
}