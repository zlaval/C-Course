#include <stdio.h>

int main(int argc, char *argv[])
{

    char name[] = "Zalan";
    printf(name);

    unsigned int length = 0;
    while (name[length] != '\0')
        length++;

    printf(" \n %d", length);

    return 0;
}