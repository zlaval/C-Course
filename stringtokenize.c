#include <stdio.h>
#include <string.h>

int main()
{

    const char name[] = "Zalan";
    char *lindex = strchr(name, 'l');

    printf("%p\n", lindex);
    printf("%p\n", &name[2]);
    printf("%c\n", *lindex);

    char *str = strstr(name, "ala");

    char sentence[] = "Hello darkness - my old - friend";

    char *token = strtok(sentence, "-");

    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, "-");
    }

    return 0;
}
