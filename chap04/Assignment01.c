/*
* 파일명: Core C Programming 2nd Edition Chap04 Programming Assignment01
* 내용 : 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램을 작성하시오.
*        질량은 kg단위, 속력은 m/s 단위로 입력받는다.
* 작성자 : 나영탁
* 날짜 : 2025.04.09
* 버전 : v2.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	assignment0401();

	return 0;
}

/*
* 함수명 : getMotionEnergy()
* 기능(책임) : 질량, 속력 입력받아 운동에너지를 계산하여 반환
* 입력 : 질량(kg), 속력(m/s)
* 반환 : 운동에너지
*/
double getMotionEnergy(double weight, double velocity)
{
	double E = 0.5 * weight * velocity * velocity;
	return E;
}

/*
* 함수명 : assignment0401()
* 기능(책임) : 질량, 속력을 입력받음, 운동에너지를 계산하도록 함수호출, 그 결과를 콘솔에 입력
* 입력 : 없음
* 반환 : 정수이며 0이면 성공, 그외 갑슨 에러이다.
*/
int assignment0401(void)
{
	double weight = 0, velocity = 0;
	printf("질량(kg)? ");
	scanf("%lf", &weight);
	printf("속력(m/s)? ");
	scanf("%lf", &velocity);
	printf("운동에너지: %.2lf J", getMotionEnergy(weight, velocity));
	return;
}
