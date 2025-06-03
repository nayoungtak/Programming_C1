/*
* ���ϸ�: Core C Programming 2nd Edition Chap07 Programming Assignment06
* ���� : ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷��� �ۼ��Ͻÿ�. �Ǽ��� �迭�� �ʱⰪ�� ������� ���Ͻÿ�.
* �ۼ��� : ����Ź
* ��¥ : 2025.05.30
* ���� : v4.0 - Kim hemi
*/

#include <stdio.h>

void printarr(double arr[]);
void printreverarr(double arr[]);
int assignment06(void);

int main(void)
{
    assignment06();

    return 0;
}

int assignment06(void)
{
    double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };

    printarr(arr);
    printreverarr(arr);

    return 0;
}

void printarr(double arr[])
{
    printf("�迭: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%.1lf ", arr[i]);
    }
    printf("\n");
}

void printreverarr(double arr[])
{
    printf("����: ");
    for (int i = 9; i < 10 && i >= 0; i--)
    {
        printf("%.1lf ", arr[i]);
    }
    printf("\n");
}