#include <stdio.h>
#include <math.h>
int main()
{
    int sub[5];
    int total = 0 ;
    for(int i = 0 ; i < 5 ; i++){
        printf("Enter %d sub mark : ",i+1);
        scanf("%d",&sub[i]);
        total = total+sub[i];
    }
    int avg = ceil(total/5);
    printf("Total mark : %d\n",total);
    printf("Avarage mark : %d\n",avg);
    if(avg>90 &&avg<100){
        printf("Grade O");
    }
    if(avg>80 &&avg<90){
        printf("Grade E");
    }
    if(avg>70 &&avg<80){
        printf("Grade A");
    }
    if(avg>60 &&avg<70){
        printf("Grade B");
    }
    if(avg>50 &&avg<60){
        printf("Grade C");
    }
    else{
        printf("Grade F");
    }
    return 0;
}
