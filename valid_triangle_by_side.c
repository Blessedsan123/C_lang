#include <stdio.h>

int main()
{
    int s1,s2,s3;
    printf("Enter the first side : ");
    scanf("%d",&s1);
    printf("Enter the second side : ");
    scanf("%d",&s2);
    printf("Enter the third side : ");
    scanf("%d",&s3);
    
    if(s1 < (s2+s3) && s2 < (s1+s3) && s3 < (s1+s2)){
        printf("Triangle is valid..");
    }
    else{
        printf("Triangle is not valid  !");
    }

    return 0;
}
