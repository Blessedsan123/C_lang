#include <stdio.h>
int main() {
    int num1,num2;
    int op;
    printf("Enter first num : ");
    scanf("%d",&num1);
    printf("Enter second num : ");
    scanf("%d",&num2);
    printf("\n1--> addition\n2--> subtract\n3--> multipication\n4--> division\n5--> reminder\n");
    printf("Enter operation : ");
    scanf("%d",&op);
    switch(op){
        case 1 : printf("addition %d + %d = %d",num1,num2,num1+num2);
        break;
        case 2 : printf("addition %d - %d = %d",num1,num2,num1-num2);
        break;
        case 3 : printf("addition %d * %d = %d",num1,num2,num1*num2);
        break;
        case 4 : printf("addition %d / %d = %d",num1,num2,num1/num2);
        break;
        case 5 : printf("addition %d % %d = %d",num1,num2,num1%num2);
        break;
        default : printf("Invalid input !");
    }
    return 0;
}
