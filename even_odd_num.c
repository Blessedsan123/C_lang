#include <stdio.h>

int main()
{ 
    int a;
    printf("Enter the number :  ");
    scanf("%d",&a);
    (a%2==0) ? printf("Number is Even") : printf("Number is Odd");
    return 0;
}
