#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numberOfMeasures;
    scanf("%d", &numberOfMeasures);

    int measures[numberOfMeasures];
    int before = 0;
    int max = 0;
    int numberOfLower = 0;
    int sizeOfLowerArray = 10;
    int *lowerThenHundred = (int *)calloc(sizeOfLowerArray, sizeof(int));
    _Bool findFirstZero = 0;
    for (int i = 0; i < numberOfMeasures; i++)
    {
        int actual;
        scanf("%d", &actual);
        if(actual==0){
            findFirstZero=1;
        }
        if (findFirstZero==1)
        {
            if (before == 0 && actual != 0)
            {
                max = actual;
            }
            else if (before != 0 && actual != 0 & before < actual)
            {
                max = actual;
            }
            else if (before != 0 && actual == 0)
            {
                if (max < 100)
                {
                    if (sizeOfLowerArray == numberOfLower)
                    {
                        sizeOfLowerArray += 10;
                        lowerThenHundred = (int *)realloc(lowerThenHundred, sizeOfLowerArray * sizeof(int));
                    }
                    *lowerThenHundred++ = max;
                    numberOfLower++;
                }
            }
            before = actual;
        }
    }

    lowerThenHundred -= numberOfLower;
    printf("%d\n", numberOfLower);
    for (int i = 0; i < numberOfLower; i++)
    {
        printf("%d ", lowerThenHundred[i]);
    }

    free(lowerThenHundred);
    return 0;
}