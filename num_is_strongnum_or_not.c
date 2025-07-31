#include <stdio.h>

int factorial(int num){
    int fact =1;
    for(int i =1 ; i<=num; i++){
        fact = fact * i ;
    }
    return fact;
}

int main() {
int  num;
printf("Enter the number : ");
scanf("%d",&num);
int c_num = num;
int sum = 0 ; 

while(!(c_num == 0)){
    sum = sum + factorial((c_num%10));
    c_num = c_num/10;
}

if(sum == num){
    printf("it is a strong number");
}
else{
    printf("it is not a strong number");
}

    return 0;
}
