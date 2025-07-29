#include <stdio.h>

int main() {
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    int fact = 1;
    if(num == 0 && num == 1){
        printf("factorial is : %d",fact);
    }
    else{
        for(int i = 1 ; i<=num ; i++){
            fact = fact*i;
        }
        printf("factorial is : %d",fact);
    }
    return 0;
}
