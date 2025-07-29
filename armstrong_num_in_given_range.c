#include <stdio.h>

int main() {
    int c_num;
    int range1, range2;
    printf("Enter the range 1 : ");
    scanf("%d",&range1);
    printf("Enter the range 2 : ");
    scanf("%d",&range2);
    for(int i = range1 ; i<range2 ; i++){
    c_num = i;
    int sum = 0 ;
    while(!(c_num == 0)){
        sum = sum + (c_num%10)*(c_num%10)*(c_num%10);
        c_num = c_num/10;
    }
    if(i == sum){
        printf("%d\n",i);
    }
    }
    return 0;
}
