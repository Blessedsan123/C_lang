#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter the number need to find squar-root : ");
    scanf("%d",&num);
    int sqroot = ceil(sqrt(num));
    printf("Squar root of %d is : %d",num,sqroot);
    return 0;
}

