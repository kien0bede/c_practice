#include <stdio.h>
#include <stdbool.h>

int main() {
    int myInt = 42;
    float myFloat = 4.999;
    double myDouble = 8.444444e+11;

    _Bool myBool = 1; // true

    bool myC99Bool = true; // C99 boolean type

    enum months { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };
    enum test { TEST1, TEST2, TEST3 = 10, TEST4 };
    enum months currentMonth = MARCH;
    printf("month: %d\n", currentMonth);
    printf("test: %d\n", TEST4);
    printf("test: %d\n", TEST2);

    enum gender { MALE, FEMALE, OTHER };

    enum gender myGender = MALE;
    enum gender anotherGender;

    anotherGender = FEMALE;

    if (myGender == anotherGender) {
        printf("Same gender\n");
    } else {
        printf("Different genders\n");
    }

    char myChar = 'A';
    printf("myChar: %c\n", myChar);
    char myCharacter = '\n'; // newline character
    printf("myCharacter: %c\n", myCharacter);
    printf("myCharacter as int: %d\n", myCharacter); // prints the ASCII value of the newline character

    enum company { GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT };
    enum company ccc = GOOGLE;

    printf("Company: %d\n", XEROX);
    printf("Company: %d\n", GOOGLE);
    printf("Company: %d\n", EBAY);
    printf("Company: %d\n", ccc);


    return 0;

}