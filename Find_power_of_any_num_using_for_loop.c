#include <stdio.h>

int main() {
int num,power;
printf("Enter the number : ");
scanf("%d",&num);
printf("Enter the power : ");
scanf("%d",&power);
int mul = num;
for(int i = 1 ; i<power ; i++){
   mul = mul*num;
}
printf("Result is : %d",mul);
    return 0;
}
