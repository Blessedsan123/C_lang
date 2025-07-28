#include <stdio.h>

int main() {
int num;
printf("Enter the number : ");
scanf("%d",&num);
printf("The factors of %d are : \n",num);
for(int i = 1 ; i<=num ; i++){
    if(num%i == 0){
        printf("%d\n",i);
    }
}
    return 0;
}
