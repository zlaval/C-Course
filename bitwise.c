#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned int a = 5; //101
    unsigned int b = 6; //110

    printf("a & b = %d \n", a & b);
    printf("a ^ b = %d \n", a ^ b);
    printf("a | b = %d \n", a | b);

    printf("~a = %d \n", ~a);
    printf("a << 2 = %d \n", a << 2);
    printf("a >> 2 = %d \n", a >> 2);

    return 0;
}