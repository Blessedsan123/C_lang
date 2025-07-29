#include <stdio.h>

int main() {
    int num , c_num;
    printf("enter the number : ");
    scanf("%d",&num);
    c_num = num;
    int sum = 0 ;
    while(!(c_num == 0)){
        sum = sum + (c_num%10)*(c_num%10)*(c_num%10);
        c_num = c_num/10;
    }
    if(num == sum){
        printf("it is an armstrong number");
    }
    else{
        printf("it is not an armstrong number");
    }
    return 0;
}
