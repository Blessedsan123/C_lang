#include <stdio.h>

int main(){
    
    int temp;
    printf("Enter temperature in celcius : ");
    scanf("%d",&temp);
    float farenhite = (temp * 9/5 )+ 32;
    printf("Temperature in farenhite is : %f",farenhite);
    return 0;
}
