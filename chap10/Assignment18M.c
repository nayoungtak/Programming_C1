/*
 파일명: Core C Programming 2nd Edition Chap10 Programming Assignment18
 내용 :
 작성자 : 나영탁
 날짜 : 2025.06.07
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Assignment18S.h"

int assignment18(void);


int main(void)
{
	assignment18();

	return 0;
}

int assignment18(void)
{
	Song songs[SNUM] = {
		{"thank u, next", "Ariana Grande", "pop", 208},
		{"Attention", "Charlie Puth", "pop", 211},
		{"별 보러 가자", "박보검", "ballad", 316},
		{"How Long", "Charlie Puth", "pop", 198},
		{"I'm Fine", "방탄소년단", "hip-hop", 209},
		{"봄날", "방탄소년단", "hip-hop", 274},
		{"Awake", "방탄소년단", "ballad", 226},
		{"아낙네", "MINO", "hip-hop", 241},
	};
	Song playlist[PNUM] = { 0 };
	int num = 0;

	for (int i = 0; i < PNUM; i++)
	{
		printf("플레이리스트에 추가할 곡 번호? ");
		scanf("%d", &num);
		if (num < 0 || num > 8)
		{
			printf("잘못된 곡 번호입니다.\n");
			i--;
			continue;
		}

		num--;

		save_playlist(songs, playlist, num);
		print_playlist(playlist);
	}

	return 0;
}