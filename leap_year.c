#include <stdio.h>

int main()
{ 
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    (year%400==0) ? printf("a leap year") : (year%4==0) ? printf("leap year") : printf("Not a leap year");
    return 0;
}
