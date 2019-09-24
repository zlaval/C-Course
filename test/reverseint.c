#include <stdio.h>

int main()
{

    int number;
    scanf("%d", &number);

    int reverse = 0;

    while (number != 0)
    {
        int tmp = number % 10;
        reverse = reverse * 10 + tmp;
        number = number / 10;
    }

    printf("Reversed: %d", reverse);

    return 0;
}