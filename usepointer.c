#include <stdio.h>

int main(int argc, char *argv[])
{
    int *pValue = NULL;
    if (pValue == NULL)
    {
        printf("It is null \n");
    }

    long value = 99L;
    const long *pConstPointerPointsTo = &value;
    printf("value of what pConstPointerPointsTo pointing to %d \n", *pConstPointerPointsTo);
    value = 100L;
    printf("value of what pConstPointerPointsTo pointing to %d \n", *pConstPointerPointsTo);
    //*pConstPointerPointsTo = 888L;
    long newValue = 110L;
    pConstPointerPointsTo = &newValue;
    printf("value of what pConstPointerPointsTo pointing to %d \n", *pConstPointerPointsTo);

    int *const pConstantPointer = &value;
    //pConstantPointer = &newValue;
    *pConstantPointer = 150L;

    const long *const pConstantPointerConstantValue = &value;
    //pConstantPointerConstantValue = &newValue;
    //*pConstantPointerConstantValue = 888L;
    value = 170;

    void *vPointer = &value;
    printf("%d", *(long *)vPointer);

    int values[100];
    int *valuesPtr = values; // equivalent valuesPtr=&values[0]

    return 0;
}