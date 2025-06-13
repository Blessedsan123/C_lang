#include <stdio.h>

int main()
{
    int first,second,sum,sub,mul,divi,remin;
    printf("first number should be big than second number..\n");
    printf("Enter first number : ");
    scanf("%d",&first);
    printf("Enter second number : ");
    scanf("%d",&second);
    sum = first + second;
    sub = first - second;
    mul = first * second;
    divi = first / second;
    remin = first % second;
    printf("\nAddition is : %d\nSubtraction is : %d\nMultipication is : %d\nDivision is : %d\nReminder is : %d\n",sum,sub,mul,divi,remin);

    return 0;
}
