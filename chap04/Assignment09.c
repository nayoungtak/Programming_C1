/*
* 파일명: Core C Programming 2nd Edition Chap04 Programming Assignment09
* 내용 : 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.04.09
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0409(void);

int main(void)
{
	assignment0409();
	return 0;
}

int assignment0409(void)
{
	int second = 0;
	printf("재생시간(초)? ");
	scanf("%d", &second);

	int minute = 0, hour = 0, ssecond = 0;
	hour = (second / 3600);
	minute = (second % 3600) / 60;
	ssecond = (second % 3600) % 60;

	printf("재생시간은 %d시간 %d분 %d초입니다.", hour, minute, ssecond);

	return 0;
}

