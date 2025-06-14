#include <stdio.h>
#include <math.h>
int main()
{
    float principal;
    float rate = 0.09;
    float period ;
    printf("Enter principle amount  : ");
    scanf("%f",&principal);
    printf("Enter time period  : ");
    scanf("%f",&period);
    float si = period * rate * principal;
    printf("Rate of interest is 9\n");
    printf("Your simple interest is : %.2f\n",si);
    float t_amount = si+principal;
    printf("Your total amount  is : %.2f",t_amount);
    return 0;
}
