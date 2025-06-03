/*
* 파일명: Core C Programming 2nd Edition Chap07 Programming Assignment01
* 내용 : 크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다.
		 첫번째 항의 값과 공차를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
* 작성자 : 나영탁
* 날짜 : 2025.05.21
* 버전 : v1.0 - SONG_professor
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment01(void);
void printArray(int arr[], int size);
void fillCD(int arr[], int size, int start, int diff);

#define ARR_SIZE 10


int main(void)
{
	return assignment01();
}

int assignment01(void)
{
	int result[10] = { 0 };
	int start = 0, diff = 0;

	printf("초기값 공차 입력하세요: ");
	scanf("%d %d", &start, &diff);
	// 초기값 공차 값 받기

	fillCD(result, ARR_SIZE, start, diff);
	printArray(result, ARR_SIZE);

}

void printArray(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++) //arr[0]부터 i가 size보다 커지기 전까지 i에 1씩 더한다.
	{
		printf("%d ", arr[i]); //arr[0]부터 출력 i가 size보다 작을때만
	}
	printf("\n");
}

void fillCD(int arr[], int size, int start, int diff)
{
	// arr[] = 등차수열 공간, size = 등차수열 개수, start = 초기값, diff = 공차
	int i;

	arr[0] = start;
	// arr[0] 자리에 초기값 입력

	for (i = 1; i < size; i++) 	// 0시작 size보다 작을때까지 i를 1씩 더한다
	{
		arr[i] = arr[i - 1] + diff;
		// arr[i]자리에 arr[i-1] + 공차
	}
}