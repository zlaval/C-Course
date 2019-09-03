#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 3;
    printf("a is %d \n", a++);

    int b = 3;
    printf("b is %d \n", ++b);

    float x = 12.345f;
    int y = x;
    printf("%d \n", y);

    float res = b * x;
    printf("%f \n", res);

    float z = (int)26.89f + 11.65f;
    printf("%f \n", z);

    printf("%d \n", sizeof(int));
    printf("%d \n", sizeof(double));
    printf("%d \n", sizeof(long double));
    printf("%d \n", sizeof(signed long int));
    printf("%d \n", sizeof(short int));
    printf("%d \n", sizeof(long));
    printf("%d \n", sizeof(signed long long int));
    printf("%d \n", sizeof(a * b));
    return 0;
}