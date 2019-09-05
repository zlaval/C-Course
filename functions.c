#include <stdio.h>

#define PI 3.15

int global = 15;

void add(int a, int b);

long long int mul(int a, int b);

int main(int argc, char *argv[]) {
    add(3, 5);
    add(5, 8);

    long long res = mul(3245234, global);
    printf("%d \n", res);

    printf("%f \n", 10 * 10 * PI);

    return 0;
}

void add(int a, int b) {
    printf("%d \n", a + b);
}

long long int mul(int a, int b) {
    return a * b;
}