#include <stdio.h>

const char message[] = "hello world";

int main(int argc, char *argv[])
{

    printf(message);
    char name[] = "Zalan";
    printf(name);

    unsigned int length = 0;
    while (name[length] != '\0')
        length++;

    printf(" \n %d", length);

    return 0;
}