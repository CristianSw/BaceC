#include <stdio.h>
#include <stdbool.h>

int second (){

    /* int
     * char
     * float
     * double
     * */

     int integerVar = 1;
     float floatVar =123.45f;
     double doubleVar = 132.132131564121e+11;
     _Bool boolVar = 1; // C99 standard
     char charVar = 'a';
     bool anotherBoolVar = true; // C11 standard
     bool thirdBoolVAr = false;  // C11 standard

    printf("Vars values: \nint : %d \nfloat: %f\ndouble: %lf \n_Bool %d \n char: %c \nbool_true: %d \nbool_false %d", integerVar,floatVar,doubleVar,boolVar,charVar,anotherBoolVar,thirdBoolVAr);
    return 0;
}