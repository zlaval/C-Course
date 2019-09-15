#include <stdio.h>
#include "merge.h"

void merge(int numberOfElements, const int *s, const int *z, int *sz, int *finalSize)
{
    int *current = sz;
    int elementProcessed = 0;
    int sProcessed = 0, zProcessed = 0;
    int szCount = 0;
    //while (*s || *z)
    while (elementProcessed++ < (numberOfElements * 2))
    {
        if (szCount != 0 && *(sz - 1) == *s)
        {
            sProcessed++;
            *s++;
            continue;
        }
        if (szCount != 0 && *(sz - 1) == *z)
        {
            zProcessed++;
            *z++;
            continue;
        }

        if (sProcessed < numberOfElements && *s < *z)
        {
            sProcessed++;
            *sz++ = *s++;
            szCount++;
        }
        else if (zProcessed < numberOfElements)
        {
            zProcessed++;
            *sz++ = *z++;
            szCount++;
        }
    }
    sz = current;
    *finalSize = szCount;
}