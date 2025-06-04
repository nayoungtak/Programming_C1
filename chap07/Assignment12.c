/*
* 파일명: Core C Programming 2nd Edition Chap07 Programming Assignment12
* 내용 : 기차표 예매 프로그램을 작성하려고 한다.
*		 간단한 구현을 위해 좌석은 모두 10개라고 하자. 예매할 좌석수를 입력받아 빈 자리를 할당한다.
*		 예매할 때마다 각 좌석의 상태를 출력한다. O이면 예매 가능, X는 예매 불가를 의미한다. 더 이상 예메할 수 없으면 프로그램을 종료한다.
* 작성자 : 나영탁
* 날짜 : 2025.05.30
* 버전 : v7.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SEATNUM 10

void assignment12(void);
void SeeSeat(char seat[]);
void SeatReservation(char seat[]);


int main(void)
{
	assignment12();

	return 0;
}

void assignment12(void)
{
	char seat[SEATNUM] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' };
	int reserved[SEATNUM] = { 0 };

	while (1)
	{
		int allReserved = 1;
		for (int i = 0; i < SEATNUM; i++) {
			if (seat[i] == 'O') {
				allReserved = 0;
				break;
			}
		}

		if (allReserved)
		{
			break;
		}
		int numOfSeat = 0;

		SeeSeat(seat);

		printf("예매할 좌석수? ");
		scanf("%d", &numOfSeat);


		int n = SeatReservation(seat, numOfSeat, reserved);
		if (n > 0) {
			for (int i = 0; i < n; i++)
			{
				printf("%d ", reserved[i]);
			}
			printf("좌석이 예약되었습니다!\n");
		}

		// SeatReservation(seat, numOfSeat);
	}
}

void SeeSeat(char seat[])
{
	printf("현재 좌석: [ ");
	for (int i = 0; i < SEATNUM; i++)
	{
		printf("%c ", seat[i]);
	}
	printf("]\n");
}

/*
int  SeatReservation(char seat[], int numOfSeat)
{
	int temp = 0;
	int count = 0;

	for (int i = 0; i < SEATNUM && temp < numOfSeat; i++)
	{
		if (seat[i] == 'O')
		{
			seat[i] = 'X';

			printf("%d ", i + 1);
			count++;
			temp++;
		}
	}

	printf("번 좌석을 예매했습니다.\n");

	return count;
}
*/

// 입력: 모든 좌석정보, 예약할 좌석수
// 반환값: 예약된 좌석수 + 예약된 좌석번호 목록
int  SeatReservation(char seat[], int numOfSeat, int reservedList[])
{
	int count = 0;

	for (int i = 0; i < SEATNUM && count < numOfSeat; i++)
	{
		if (seat[i] == 'O')
		{
			seat[i] = 'X';

			reservedList[count++] = i + 1;
		}
	}

	return count;
}


