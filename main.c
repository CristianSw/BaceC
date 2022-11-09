#include <stdio.h>
#include <stdbool.h>

int main() {

//    char str[100];
//    int integer;
//    float floatValue;
//    double doubleValue;

//    printf("Hello, Cristian remind C!\n");
//    printf("Enter some string : ");
//    scanf("%s", str);
//    printf("Enter some int : ");
//    scanf("%d", &integer);
//    printf("Enter some float : ");
//    scanf("%f", &floatValue);
//    printf("Enter some double : ");
//    scanf("%lf", &doubleValue);
//    printf("inserted : %s------%d------%f------%lf", str, integer,floatValue,doubleValue);



    /* int
     * char
     * float
     * double
     * */

//    int integerVar = 1;
//    float floatVar =123.45f;
//    double doubleVar = 132.132131564121e+11;
//    _Bool boolVar = 1; // C99 standard
//    char charVar = 'a';
//    bool anotherBoolVar = true; // C11 standard
//    bool thirdBoolVAr = false; // C11 standard
//
//    printf("Vars values: \n int : %d \n float: %f\n double: %lf \n_Bool: %d \n char: %c \n bool_true: %d \n bool_false: %d", integerVar,floatVar,doubleVar,boolVar,charVar,anotherBoolVar,thirdBoolVAr);
//
    /*Enums in C*/
//    enum primaryColor {
//        red, yellow, blue
//    };
//
//    enum primaryColor color = blue;
//    printf("color : %u", color);

    /*format specifiers*/

    /*
     * %i - integer
     * %d - integer
     * %f - float
     * %e - double
     * %g - double
     * %c - char
     * %i - boolean
     * */

//    declare some vars
//int intVar = 1242;
//double doubleVar = 123.45558854143242342424464e+11;
//float floatVar = 1234.153215f;
//char charVar = 'b';
//bool boolVar = true;
//
//    printf("Int var displayed with i: %i\n",intVar);
//    printf("Int var displayed with d: %i\n",intVar);
//    printf("Float var displayed with f: %.5f\n",floatVar);
//    printf("Double var displayed with e: %.20e\n",doubleVar);
//    printf("Double var displayed with g: %g\n",doubleVar);
//    printf("Char var displayed with c: %c\n",charVar);
//    printf("Bool var displayed with i: %i\n",boolVar);

/*Assignment calc area of rectangle*/

//int width = 10;
//int height = 12;
//float perimeter = width + height * 2;
//float area = width * height;
//
//printf(" Square width: %i and height: %i \n Perimeter : %.2f \n Area: %.2f",width,height,perimeter,area);


/*Enum assignment to display values of enum type*/


//    enum Company {
//        GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT
//    };
//
//    enum Company google = GOOGLE;
//    enum Company ebay = EBAY;
//    enum Company xerox = XEROX;
//
//    printf(" xerox: %i \n google: %i \n ebay: %i", xerox, google, ebay);


    /*Operators*/
    /*
     * arithmetic
     * logical
     * assignment
     * relational
     * */

    /*Arithmetical
     * + - add
     * - - subtract
     * * - multiply
     * / - divide
     * % - modulo
     * ++ - increment
     * -- - decrement
     * */

    int a, b, c;
    float f;
    a = 121;
    b = 123;

    c = a + b;
    printf("a + b = %d", c);

    c = a - b;
    printf("\na - b = %d", c);

    c = a * b;
    printf("\na * b = %d", c);

    c = a / b;
    printf("\na / b = %d", c);

    c = a % b;
    printf("\na mod b = %d", c);

    f =(float) a / b;
    printf("\na / b = %f", f);

    /*Logical
     *
     * && - both true
     * || - one true
     * !  - not
     * */
    bool aa = true;
    bool bb = false;
    bool result;

    result = a && b;
    printf("\n&& : %i", result);

    result = a || b;
    printf("\n|| : %i", result);
    result = !a;
    printf("\n!: %i", result);


    /*Assignment
     *
     * =
     * +=
     * -=
     * *=
     * /=
     * %=
     * */


    /*Bitwise operators
     *
     * &
     * |
     * ^
     * ~
     * <<
     * >>
     * */


    unsigned int intA = 60; // 0011 1100
    unsigned int intB = 13; // 0000 1101
    int bitResult = 0;

    bitResult = intA & intB;
    printf("\nBit: %d", bitResult);

    bitResult = intA | intB;
    printf("\nBit: %d", bitResult);

    bitResult = intA << 2;
    printf("\nBit: %d", bitResult);
    return 0;
}
