#include<stdio.h>

int main(){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    
    for(int i = 1 ; i<=num ; i++){
        int count = 0 ;
        if(num%i == 0){
           for(int j =1 ; j<=i; j++){
               if(i%j == 0){
                   count++;
               }
           }
           if(count == 2){
               printf("%d\n",i);
           }
           
        }
        
    }
    return 0;
}
