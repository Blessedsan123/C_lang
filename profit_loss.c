#include <stdio.h>

int main()
{
    float invested_amt;
    float gained_amt;
    printf("enter the amount invested : ");
    scanf("%f",&invested_amt);
    printf("enter the amount gained : ");
    scanf("%f",&gained_amt);
    if(gained_amt > invested_amt){
        printf("profit is : %.2f rs-/",gained_amt-invested_amt);
    }
    else{
        printf("loss is : %.2f rs-/",gained_amt-invested_amt);
  
    }
    return 0;
}
