#include <stdio.h>
#include <stdbool.h>

int main() {
    int myInt = 42;
    float myFloat = 4.87666666;
    double myDouble = 8.444444e+11;
    char myChar = 'A';
    bool myBool = true;

    printf("myInt: %d\n", myInt);
    printf("myFloat: %f\n", myFloat);
    printf("myFloat with 2 decimal places: %.2f\n", myFloat);
    printf("myDouble: %e\n", myDouble);
    printf("myChar: %c\n", myChar);
    printf("myBool: %d\n", myBool);

    return 0;
}