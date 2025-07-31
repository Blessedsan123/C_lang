#include <stdio.h>

void min_max(int a, int b){
    if(a>b){
        printf("%d is max and %d is min",a,b);
    }
    else{
        printf("%d is max and %d is min",b,a);
    }
}

int main() {
    int num1,num2;
    printf("Enter the num 1 : ");
    scanf("%d",&num1);
    printf("Enter the num 2 : ");
    scanf("%d",&num2);
    min_max(num1,num2);
    return 0;
}
