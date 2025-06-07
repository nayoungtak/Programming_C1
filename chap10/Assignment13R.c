
#include <stdio.h>
#include <string.h>
#include "Assignment13R.h"

void print_rect(RECT leftB, RECT rightT)
{
	printf("[RECT 좌하단점:(%d, %d) 우상단점:(%d, %d)]\n", leftB.x, leftB.y, rightT.x, rightT.y);
}
