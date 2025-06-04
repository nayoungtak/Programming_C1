/*
* ���ϸ�: Core C Programming 2nd Edition Chap07 Programming Assignment12
* ���� : ����ǥ ���� ���α׷��� �ۼ��Ϸ��� �Ѵ�.
*		 ������ ������ ���� �¼��� ��� 10����� ����. ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��Ѵ�.
*		 ������ ������ �� �¼��� ���¸� ����Ѵ�. O�̸� ���� ����, X�� ���� �Ұ��� �ǹ��Ѵ�. �� �̻� ������ �� ������ ���α׷��� �����Ѵ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.05.30
* ���� : v7.0
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

		printf("������ �¼���? ");
		scanf("%d", &numOfSeat);


		int n = SeatReservation(seat, numOfSeat, reserved);
		if (n > 0) {
			for (int i = 0; i < n; i++)
			{
				printf("%d ", reserved[i]);
			}
			printf("�¼��� ����Ǿ����ϴ�!\n");
		}

		// SeatReservation(seat, numOfSeat);
	}
}

void SeeSeat(char seat[])
{
	printf("���� �¼�: [ ");
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

	printf("�� �¼��� �����߽��ϴ�.\n");

	return count;
}
*/

// �Է�: ��� �¼�����, ������ �¼���
// ��ȯ��: ����� �¼��� + ����� �¼���ȣ ���
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


