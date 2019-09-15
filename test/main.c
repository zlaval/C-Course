#include <stdio.h>
#include <stdlib.h>
#include "merge.h"

int main()
{

    int elementCount = 100;
    int *s = (int *)calloc(elementCount, sizeof(int));
    int *z = (int *)calloc(elementCount, sizeof(int));
    int *sz = (int *)calloc(2 * elementCount, sizeof(int));

    for (int i = 0; i < elementCount; i++)
    {
        s[i] = 2 * i;
        z[i] = 3 * i;
    }

    s[10] = 21;
    s[11] = 21;

    int finalSize = 0;
    merge(elementCount, s, z, sz, &finalSize);

    for (int i = 0; i < 2 * elementCount; i++)
    {
        printf("the %d. element is %d \n", i, sz[i]);
    }

    printf("The final size is %d \n", finalSize);

    free(s);
    free(z);
    free(sz);
    s = NULL;
    z = NULL;
    sz = NULL;

    return 0;
}