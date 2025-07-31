#include <stdio.h>

int factorial(int num){
    int fact =1;
    for(int i =1 ; i<=num; i++){
        fact = fact * i ;
    }
    return fact;
}

int main() {
int  range1, range2;
printf("Enter range 1 : ");
scanf("%d",&range1);
printf("Enter range 2 : ");
scanf("%d",&range2);
for(int i = range1 ; i< range2; i++){
int c_num = i;
int sum = 0 ; 

while(!(c_num == 0)){
    sum = sum + factorial((c_num%10));
    c_num = c_num/10;
}

if(sum == i){
    printf("%d\n",i);
}
}

    return 0;
}
