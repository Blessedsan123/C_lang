#include <stdio.h>

int main() {
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    int count = 0 ;
    for(int i = 1 ; i<=num; i++){
        if(num%i == 0){
            count++;
        }
    }
    if(count == 2){
                printf("it is a prime number");
            }
            else{
                printf("it is not a prime number");
            }
    return 0;
}
