#include <stdio.h>

int main()
{ 
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num%5==0 && num%11==0){
        printf("Number is divisible by both 5 and 11");
    }
    else{
        printf("Number is not divisible");
    }
    return 0;
}
