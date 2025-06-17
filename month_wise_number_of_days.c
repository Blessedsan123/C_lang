#include <stdio.h>

int main()
{
    
    int num;
    printf("Enter month number : ");
    scanf("%d",&num);
    if(num == 1 ||num == 3 ||num == 5 ||num == 7 ||num == 8 ||num == 10 ||num == 12 ){
        printf("Total days in this month is : %d",31);
    }
    if(num == 4 ||num == 6 ||num == 9 ||num == 11){
        printf("Total days in this month is : %d",30);
    }
    if(num==2){
        printf("Total days in this month is : %d",28);
    }
    

    return 0;
}
