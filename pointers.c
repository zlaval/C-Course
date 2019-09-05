#include <stdio.h>

const int HUNDRED = 100;

int main(int argc, char *argv[])
{

    int *pNumber = &HUNDRED;
    printf("%p \n", pNumber);
    printf("%d \n", pNumber);

    int *pNumber2 = NULL;

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