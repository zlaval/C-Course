#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

struct time
{
    int hour;
    int minute;
    int second;
};

struct dateTime
{
    struct date date;
    struct date time;
};

int main()
{
    struct date today;
    today.day = 13;
    today.month = 9;
    today.year = 2019;

    printf("Today is %i.%i.%i", today.year, today.month, today.day);

    struct date birth = {1987, 8, .day = 7};

    struct date erik = (struct date){.day = 2, .month = 6, .year = 2013};

    struct
    {
        int age;
        int weight;
    } person;

    person.age = 20;
    person.weight = 80;

    struct date dates[3] = {{2019, 1, 2}, {2019, 2, 10}, {2019, 9, 23}};
    dates[0].day = 3;

    struct date dates[3] = {[1] = {2019, 1, 2}};


    struct dateTime now;
    now.date.year=2019;

    int year=now.date.year;

    return 0;
}