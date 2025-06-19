#include <stdio.h>
int main() {
    int salary,da,hra,gross ;
    printf("Enter the basic salary : ");
    scanf("%d",&salary);
    if(salary <= 10000){
        printf("your hra added 20%\n");
        printf("your da added 80%\n");
        gross = salary + 0.2*salary + 0.8*salary;
        printf("Your gross salary is : %d\n",gross);
    }
    if(salary > 10000 && salary <= 20000){
        printf("your hra added 25%\n");
        printf("your da added 90%\n");
        gross = salary + 0.25*salary + 0.9*salary;
        printf("Your gross salary is : %d\n",gross);
    }
    if(salary > 20000){
        printf("your hra added 30%\n");
        printf("your da added 95%\n");
        gross = salary + 0.3*salary + 0.95*salary;
        printf("Your gross salary is : %d\n",gross);
    }
    return 0;
}
