/*
* 파일명: Core C Programming 2nd Edition Chap06 Programming Assignment09
* 내용 : red, green, blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 make_rgb 함수를 정의하시오.
*		 앞에서 정의한 get_red, get_green, get_blue 함수를 함께 이용해서 입력받은 RGB 색상의 보색을 구해서 출력하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.05.22
* 버전 : v3.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0609(void);
void make_rgb();
char get_red();
char get_green();
char get_blue();

unsigned char red = 0, green = 0, blue = 0;
unsigned int rgb_color = 0;


int main(void)
{
	assignment0609();
	return 0;
}

double assignment0609(void)
{
	make_rgb();
	return 0;
}

void make_rgb()
{
	printf("RGB 색상? ");
	scanf("%x", &rgb_color);

	unsigned char Nred = ~get_red(rgb_color);
	unsigned char Ngreen = ~get_green(rgb_color);
	unsigned char Nblue = ~get_blue(rgb_color);

	unsigned int Nrgb_color = (Nred << 16) | (Ngreen << 8) | (Nblue);

	printf("RGB %06X의 보색: %06X", rgb_color, Nrgb_color);

}

char get_red(int rgb_color)
{
	return (rgb_color >> 16) & 0xFF;
}
char get_green(int rgb_color)
{
	return (rgb_color >> 8) & 0xFF;
}
char get_blue(int rgb_color)
{
	return rgb_color & 0xFF;
}