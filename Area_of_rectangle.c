#include <stdio.h>

int main(){
    float length,breadth;
    printf("Enter the length of Rectangle : ");
    scanf("%f",&length);
    printf("Enter the breadth of Rectangle : ");
    scanf("%f",&breadth);
    float area = length * breadth;
    printf("Area of Rectangle is : %.2f",area);
    return 0;
}
