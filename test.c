#include <stdio.h>

int main(void) {
    char str[100];
    int i;
    printf("Enter your name and age!");
    scanf("%s %d", str, &i);
    printf("Hello %s, you are %d years old.", str, i);

    float age = 23.333;
    double weight = 7e+3;
    _Bool female = 0;

    return 0;
}