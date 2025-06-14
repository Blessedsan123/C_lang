#include <stdio.h>
#include <math.h>
int main()
{
    int length ;
    printf("Enter the legth for equilateral triangle : ");
    scanf("%d",&length);
    int area = (sqrt(3)/4) * pow(length,2);
    printf("Area of eqilateral triangle is : %d",area);
    return 0;
}
