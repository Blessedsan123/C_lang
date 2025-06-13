#include <stdio.h>

int main()
{
    int integer;
    float decimal;
    char character;
    double decimalbig;
    printf("Enter an integer : ");
    scanf("%d",&integer);
    printf("Enter an decimal : ");
    scanf("%f",&decimal);
    printf("Enter an character : ");
    scanf("%c",&character);
    printf("Enter an decimal-big : ");
    scanf("%lf",&decimalbig);
    printf("Integer is : %d\nDecimal is : %f\ncharacter is : %c\nBig Decimal is : %lf",integer,decimal,character,decimalbig);

    return 0;
}
