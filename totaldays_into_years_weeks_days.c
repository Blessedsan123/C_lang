#include <stdio.h>
#include <math.h>
int main()
{
    int tdays;
    printf("Enter no. of days : ");
    scanf("%d",&tdays);
    int year,week,day;
    year = tdays/365;
    week= (tdays%365)/7 ;
    day = (tdays%365)%7;

    printf("%d year %d week %d days\n",year,week,day);

    return 0;
}
