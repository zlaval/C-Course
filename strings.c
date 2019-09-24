#include <stdio.h>
#include <string.h>

const char message[] = "hello world";

int main(int argc, char *argv[])
{

    printf(message);
    char name[] = "Zalan";
    printf(name);

    unsigned int length = 0;
    while (name[length] != '\0')
        length++;

    printf("  %d\n", length);

    char name2[20];
    strncpy(name2, name, sizeof(name2) - 1);
    printf("Name2 length: %d \n", strlen(name2));
    strcat(name2, name);
    printf("%s \n", name2);

    int res = strcmp(name2, name);
    printf("%d \n", res);

    int res2 = strncmp(name2, name, 5);
    printf("%d \n", res2);

    printf("%d", strlen(name));

    return 0;
}