#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

struct Point
{
    int *x;
    int *y;
};

int main()
{

    struct date toDay;
    struct date *datePtr = &toDay;
    (*datePtr).year = 2019;
    datePtr->month = 12; //same az above
    datePtr->day = 12;

    int x = 10;
    int y = 20;

    struct Point point;
    point.x = &x;
    point.y = &y;
    *point.y = -30;

    return 0;
}