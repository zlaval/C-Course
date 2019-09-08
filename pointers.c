#include <stdio.h>

int main(int argc, char *argv[])
{

    int hundred = 100;
    printf("address of 100 variable %p \n", &hundred);
    int *pNumber = &hundred;
    printf("address of 100 %p \n", pNumber);
    printf("address of 100 pnumber pointer %p \n", &pNumber);
    *pNumber = 150L;
    printf("address of 150 %p \n", pNumber);
    printf("address of 150 pnumber pointer %p \n", &pNumber);
    printf("value of what 150 pnumber pointing to %d \n", *pNumber);
    int hsty = 160;
    pNumber = &hsty;
    printf("address of 160 value %p \n", &hsty);
    printf("address of 160 %p \n", pNumber);
    printf("address of 160 pnumber pointer %p \n", &pNumber);

    printf("value of what pnumber pointing to %d \n", *pNumber);

    int *pNumber2 = NULL;
    printf("%d \n", (int)sizeof(pNumber2));

    int seven = 7;
    int *pSeven = &seven;
    int sevenValMulFive = *pSeven + 5;
    printf("%d \n", sevenValMulFive);
    int sevenValAddpNumber = *pSeven + *pNumber;
    printf("%d \n", sevenValAddpNumber);
    int sevenValMulpNumber = *pSeven * *pNumber;
    printf("%d \n", sevenValMulpNumber);

    //int x =&pnumber2 * &pnumber1;

    return 0;
}