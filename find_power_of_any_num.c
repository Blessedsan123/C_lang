#include <stdio.h>
int main()
{
    int num,power;
    printf("Enter number : ");
    scanf("%d",&num);
    int copy = num;
    printf("Enter power : ");
    scanf("%d",&power);
    for(int i = 0 ; i<power-1;i++){
        num = num*copy;
    }
    printf("Result : %d",num);
    return 0;
}
