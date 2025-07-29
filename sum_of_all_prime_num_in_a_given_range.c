#include <stdio.h>

int main() {
    int range1;
    int range2;
    
    printf("Enter the range 1 : ");
    scanf("%d",&range1);
    printf("Enter the range 2 : ");
    scanf("%d",&range2);
    int sum = 0 ;
    for(int i = range1; i<range2; i++){
        int count = 0 ; 
        for(int j = 1; j<=i; j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count == 2){
            sum = sum +i;
        }
       
    }
    printf("The sum is : %d",sum);
    return 0;
}
