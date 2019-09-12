#include <stdio.h>

int sum(int array[], const int n);
int copyStr(char *to, char *from);

int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d \n", sum(array, 10));

    char from[] = "Hello my old friend";
    char to[50];
    copyStr(to, from);
    printf("%s \n", to);

    int number = 30;
    printf("%d \n", number);
    setToHundred(&number);
    printf("%d \n", number);

    int *numAllocedPointer = (int *)malloc(sizeof(int));
    *numAllocedPointer = 10;
    setToHundred(numAllocedPointer);
    
    return 0;
}

int sum(int array[], const int n)
{
    int sum = 0;
    int *ptr;
    int *const end = array + n;
    for (ptr = array; ptr < end; ptr++)
    {
        sum += *ptr;
    }
    return sum;
}

int setToHundred(int *num)
{
    *num = 100;
}

int *returnPtr()
{
    int a = 10;
    int *ptr = &a;
    return ptr;
}

//int tryToSet(int const *num){
//   *num=100;
//}

int copyStr(char *to, char *from)
{
    while (*from)
    {
        *to++ = *from++;
    }
    *to = '\0';
}