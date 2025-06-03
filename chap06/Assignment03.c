/*
* 파일명: Core C Programming 2nd Edition Chap06 Programming Assignment03
* 내용 : distance 함수를 이용해서 입력받은 시작점부터 끝점 사이의 직선 거리를 구하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.05.20
* 버전 : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double assignment0603(void);
double distance(int x1, int y1, int x2, int y2);

int main(void)
{
	assignment0603();
	return 0;
}

double assignment0603(void)
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

	printf("지선의 시작점 좌표? ");
	scanf("%d %d", &x1, &y1);
	printf("지선의 끝점 좌표? ");
	scanf("%d %d", &x2, &y2);

	double distG = distance(x1, y1, x2, y2);
	printf("(%d, %d)~(%d, %d) 직선 거리: %lf\n", x1, y1, x2, y2, distG);

	return 0;
}

double distance(int x1, int y1, int x2, int y2)
{
	double distG = 0.0;
	distG = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return distG;
}