
// #pragma once

#ifndef _Assignment18S_H_123456789
#define _Assignment18S_H_123456789
#define SNUM 8
#define PNUM 8

struct song
{
	char title[21];
	char artist[21];
	char genre[21];
	int playtime;

};
typedef struct song Song;

int save_playlist(Song songs[], Song playlist[], int num);
int print_playlist(Song playlist[]);


#endif //_Assignment18S_H_123456789
