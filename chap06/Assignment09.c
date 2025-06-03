/*
* ���ϸ�: Core C Programming 2nd Edition Chap06 Programming Assignment09
* ���� : red, green, blue�� ���ڷ� �����ؼ� RGB ���� ����� �����ϴ� make_rgb �Լ��� �����Ͻÿ�.
*		 �տ��� ������ get_red, get_green, get_blue �Լ��� �Բ� �̿��ؼ� �Է¹��� RGB ������ ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.05.22
* ���� : v3.0
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
	printf("RGB ����? ");
	scanf("%x", &rgb_color);

	unsigned char Nred = ~get_red(rgb_color);
	unsigned char Ngreen = ~get_green(rgb_color);
	unsigned char Nblue = ~get_blue(rgb_color);

	unsigned int Nrgb_color = (Nred << 16) | (Ngreen << 8) | (Nblue);

	printf("RGB %06X�� ����: %06X", rgb_color, Nrgb_color);

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