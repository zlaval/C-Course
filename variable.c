#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

    float age = 23.333;
    double weight = 7e+3;
    _Bool female = 0;
    bool male = true;
    short hight = 175;
    long double iq = 12334545.7L;
    unsigned long int newton = 23L;
    char letter = 'A';
    printf("%c", letter);
    char newLine = '\n';

    enum Color {
        RED,
        GREEN = 20,
        BLUE
    };

    enum Color color = RED;
    return 0;
}
