#include <stdio.h>

int main() {
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    int  sum = 0;
    for(int i = 1 ; i<num; i++){
        if(num%i == 0){
            sum = sum + i;
        }
    }
    if(sum == num){
        printf("it is a perfect number");
    }
    else{
        printf("it is not a perfect number");
    }
    return 0;
}
