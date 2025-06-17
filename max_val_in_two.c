#include <stdio.h>

int main()
{ 
    int num1,num2;
    printf("Enter number1 : ");
    scanf("%d",&num1);
    printf("Enter number2 : ");
    scanf("%d",&num2);
    printf("Max value is : %d", (num1>num2) ? num1 : num2);
    

    return 0;
}
