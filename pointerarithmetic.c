#include <stdio.h>

int sum(int array[], const int n);

int main(int argc, char *argv[])
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d \n", sum(array, 10));

    return 0;
}

int sum(int array[], const int n)
{
    int sum = 0;
    int *ptr;
    int *const end = array + n;
    for (ptr = array; ptr < end; ptr++)
    {
        sum += *ptr;
    }
    return sum;
}