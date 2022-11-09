#include <stdio.h>

int main() {

    char str[100];
    int integer;
    float floatValue;
    double doubleValue;

//    printf("Hello, Cristian remind C!\n");
    printf("Enter some string : ");
    scanf("%s", str);
    printf("Enter some int : ");
    scanf("%d", &integer);
    printf("Enter some float : ");
    scanf("%f", &floatValue);
    printf("Enter some double : ");
    scanf("%lf", &doubleValue);
    printf("inserted : %s------%d------%f------%lf", str, integer,floatValue,doubleValue);
    return 0;
}
