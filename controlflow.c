#include <stdio.h>

int main(int argc, char *argv[]) {
    int numbers[10];
    int a = 1;
    int b = 2;
    if (a < b) {
        printf("a is lower then b \n");
    }

    for (int i = 0; i < 10; i++) {
        printf("%d \n", i);
        numbers[i] = i * 2;
    }
    printf("%d \n", sizeof(numbers));

    int x[3] = {0, 1, 0};
    int y[30] = {0, 1, 0};
    int z[30] = {[5] = 123, [10] = 154, [20] = 345};

    for (int i = 0; i < sizeof(z) / sizeof(z[0]); i++) {
        printf("%d. element = %d \n", i, z[i]);
    }

    int matrix[3][3] = {
            {1, 2, 3},
            {3, 2, 1},
            {5, 6, 7}
    };

    return 0;
}