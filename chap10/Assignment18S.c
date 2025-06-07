
#include <stdio.h>
#include <string.h>
#include "Assignment18S.h"


int save_playlist(Song songs[], Song playlist[], int num)
{
    for (int i = 0; i < PNUM; i++)
    {
        if (strlen(playlist[i].artist) > 0)
        {
            continue;
        }
        strcpy_s(playlist[i].title, sizeof(playlist[i].title), songs[num].title);
        strcpy_s(playlist[i].artist, sizeof(playlist[i].artist), songs[num].artist);
        strcpy_s(playlist[i].genre, sizeof(playlist[i].genre), songs[num].genre);
        playlist[i].playtime = songs[num].playtime;
        break;
    }
    return 0;
}

int print_playlist(Song playlist[])
{
	int Tplaytime = 0;
	printf("<< 플레이리스트 >>\n");
	for (int i = 0; i < PNUM; i++)
	{
        if (strlen(playlist[i].artist) == 0)
        {
            break;
        }
        printf("%d: %-16s %-16s %-16s %7d초\n", i + 1, playlist[i].title, playlist[i].artist, playlist[i].genre, playlist[i].playtime);
        Tplaytime += playlist[i].playtime;
	}
    printf("총 재생시간 : %d초\n", Tplaytime);
    return 0;
}
