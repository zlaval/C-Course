#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *pointer = (int *)malloc(25 * sizeof(int));
    if (!pointer)
    {
        return 1;
    }

    free(pointer);
    pointer = NULL;

    pointer = (int *)calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        *pointer = i;
        pointer++;
    }
    pointer -= 10;

    for (int i = 0; i < 10; i++)
    {
        printf("%d -> %p\n", *pointer, pointer);
        pointer++;
    }

    pointer -= 10;
    printf("----------------\n");

    pointer = (int *)realloc(pointer, 15 * sizeof(int));
    if (!pointer)
    {
        return 1;
    }
    for (int i = 0; i < 11; i++)
    {
        printf("%d -> %p\n", *pointer, pointer);
        pointer++;
    }

    free(pointer);
    pointer = NULL;

    return 0;
}