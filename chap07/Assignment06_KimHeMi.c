/*
* 파일명: Core C Programming 2nd Edition Chap07 Programming Assignment06
* 내용 : 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램을 작성하시오. 실수형 배열의 초기값은 마음대로 정하시오.
* 작성자 : 나영탁
* 날짜 : 2025.05.30
* 버전 : v4.0 - Kim hemi
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
    printf("배열: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%.1lf ", arr[i]);
    }
    printf("\n");
}

void printreverarr(double arr[])
{
    printf("역순: ");
    for (int i = 9; i < 10 && i >= 0; i--)
    {
        printf("%.1lf ", arr[i]);
    }
    printf("\n");
}