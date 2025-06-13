#include <stdio.h>

int main(){
    float len, m,k;
    printf("Enter length in centimeter : ");
    scanf("%f",&len);
    m = len/100;
    k = m/1000;
    printf("Lenth in meter  : %f\nLenth in Kilometer : %f",m,k);
    return 0;
}
