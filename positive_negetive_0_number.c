#include <stdio.h>

int main()
{ 
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num>0){
        printf("Number is positive");
    }
    else if(num<0){
        printf("Number is negetive");
    }
    else{
        printf("%d",0);
    }
    return 0;
}
