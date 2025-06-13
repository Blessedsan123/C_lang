#include <stdio.h>

int main()
{
    int first,second,sum;
    printf("Enter first number : ");
    scanf("%d",&first);
    printf("Enter second number : ");
    scanf("%d",&second);
    sum = first+second;
    printf("Sum of %d and %d is : %d",first,second,sum);
    return 0;
}
