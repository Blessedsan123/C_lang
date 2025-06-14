#include <stdio.h>

int main()
{
    int base,height;
    printf("Enter base for triagle : ");
    scanf("%d",&base);
    printf("Enter height for triagle : ");
    scanf("%d",&height);
    int area = 0.5 * base * height;
    printf("Area of triangle is : %d",area);
    return 0;
}
