#include <stdio.h>
#include <math.h>
#define PI 3.141
int main(){
    int radius;
    printf("Enter the radius of circle : ");
    scanf("%d",&radius);
    float diameter = 2 * radius;
    float circumference = 2 * PI * radius;
    float area = PI * pow(radius,2);
    printf("Diameter is : %f\nCircumference is : %f\nArea is : %f\n",diameter,circumference,area);
    return 0;
}
