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

		SeatReservation(seat);
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

void SeatReservation(char seat[])
{
	int numofseat = 0, temp = 0;

	SeeSeat(seat);
	printf("������ �¼���? ");
	scanf("%d", &numofseat);

	for (int i = 0; i < SEATNUM && temp < numofseat; i++)
	{
		if (seat[i] == 'O')
		{
			seat[i] = 'X';

			printf("%d ", i + 1);

			temp++;
		}
	}

	printf("�� �¼��� �����߽��ϴ�.\n");
}

