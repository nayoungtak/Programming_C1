/*
 ���ϸ�: Core C Programming 2nd Edition Chap10 Programming Assignment18
 ���� :
 �ۼ��� : ����Ź
 ��¥ : 2025.06.07
 ���� : v1.0
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
		{"�� ���� ����", "�ں���", "ballad", 316},
		{"How Long", "Charlie Puth", "pop", 198},
		{"I'm Fine", "��ź�ҳ��", "hip-hop", 209},
		{"����", "��ź�ҳ��", "hip-hop", 274},
		{"Awake", "��ź�ҳ��", "ballad", 226},
		{"�Ƴ���", "MINO", "hip-hop", 241},
	};
	Song playlist[PNUM] = { 0 };
	int num = 0;

	for (int i = 0; i < PNUM; i++)
	{
		printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
		scanf("%d", &num);
		if (num < 0 || num > 8)
		{
			printf("�߸��� �� ��ȣ�Դϴ�.\n");
			i--;
			continue;
		}

		num--;

		save_playlist(songs, playlist, num);
		print_playlist(playlist);
	}

	return 0;
}