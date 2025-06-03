/*
* 파일명: Core C Programming 2nd Edition Chap07 Programming Assignment10
* 내용 : 3 X 3 행렬의 합을 구하는 프로그램을 작성하시오. 행렬로 사용될 2차원 배열은 마음대로 초기화해도 된다.
* 작성자 : 나영탁
* 날짜 : 2025.05.30
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROWSIZE 3
#define COLUMNSIZE 3

int assignment10(void);
void addMatrix(int xarr[COLUMNSIZE][ROWSIZE], int yarr[COLUMNSIZE][ROWSIZE], int xyarr[COLUMNSIZE][ROWSIZE]);
void printMatrix(int xyarr[COLUMNSIZE][ROWSIZE]);


int main(void)
{
	assignment10();

	return 0;
}

int assignment10(void)
{
	int xarr[COLUMNSIZE][ROWSIZE] = { { 10, 20, 30 }, { 40, 50, 60 }, { 70, 80, 90 } };
	int yarr[COLUMNSIZE][ROWSIZE] = { { 9, 8, 7 }, { 6, 5, 4 }, { 3, 2, 1 } };
	int xyarr[COLUMNSIZE][ROWSIZE] = { 0 };

	addMatrix(xarr, yarr, xyarr);

	printf("x 행렬:\n");
	printMatrix(xarr);
	printf("y 행렬:\n");
	printMatrix(yarr);
	printf("x + y 행렬:\n");
	printMatrix(xyarr);

	return 0;
}

void addMatrix(int xarr[COLUMNSIZE][ROWSIZE], int yarr[COLUMNSIZE][ROWSIZE], int xyarr[COLUMNSIZE][ROWSIZE])
{
	for (int i = 0; i < COLUMNSIZE; i++)
	{
		for (int j = 0; j < ROWSIZE; j++)
		{
			xyarr[i][j] = xarr[i][j] + yarr[i][j];
		}
	}
}

void printMatrix(int arr[COLUMNSIZE][ROWSIZE])
{
	for (int i = 0; i < COLUMNSIZE; i++)
	{
		for (int j = 0; j < ROWSIZE; j++)
		{
			printf(" %d", arr[i][j]);
		}
		printf("\n");
	}
}