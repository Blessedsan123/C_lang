#include <stdio.h>

int main() {
    int range1, range2;
    printf("enter the range 1 : ");
    scanf("%d",&range1);
    printf("enter the range 2 : ");
    scanf("%d",&range2);
    for(int j = range1 ; j < range2; j++){
    int  sum = 0;
    for(int i = 1 ; i<j; i++){
        if(j%i == 0){
            sum = sum + i;
        }
    }
    if(sum == j){
        printf("%d\n",j);
    }
    }
    return 0;
}
