#include <stdio.h>

int main(){
    
    int temp;
    printf("Enter temperature in farenhite : ");
    scanf("%d",&temp);
    int celcius = (temp - 32) * 5/9;
    printf("Temperature in celcius is : %d",celcius);
    return 0;
}
