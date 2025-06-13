#include <stdio.h>

int main(){
    float length,breadth;
    printf("Enter the length of Rectangle : ");
    scanf("%f",&length);
    printf("Enter the breadth of Rectangle : ");
    scanf("%f",&breadth);
    float perimeter = 2 * (length + breadth);
    printf("Perimeter of Rectangle is : %.2f",perimeter);
    return 0;
}
