#include <stdio.h>

int get_cube(int num){
    return num*num*num;
}

int main(){
int num;
printf("enter the number : ");
scanf("%d",&num);
int cube = get_cube(num);
printf("Cube of %d is : %d",num,cube);
    return 0;
}
