#include <stdio.h>

int main()
{
    int s1,s2,s3,a1,a2,a3;
    printf("Enter 3 sides of the triangle...\n");
    printf("Enter the side1 : ");
    scanf("%d",&s1);
    printf("Enter the side2 : ");
    scanf("%d",&s2);
    printf("Enter the side3 : ");
    scanf("%d",&s3);
    
    printf("\nEnter 3 angles of the triangle...\n");
    printf("Enter the angle1 : ");
    scanf("%d",&a1);
    printf("Enter the angle2 : ");
    scanf("%d",&a2);
    printf("Enter the angle3 : ");
    scanf("%d",&a3);
    
    if((s1 == s2 && s2 == s3) && (a1 == a2 && a2 == a3) && ((a1+a2+a3) == 180)){
        printf("it is an equilateral triangle");
    }
    else if((s1==s2 || s2==s3 || s1==s3) && (a1==a2 || a2==a3 || a1==a3) && ((a1+a2+a3) == 180)){
        printf("it is an isosceles triangle");
    }
    else if((s1!=s2 && s2!=s3) && (a1!=a2 && a2!=a3) && ((a1+a2+a3) == 180)){
        printf("it is a scalene triangle");
    }
    else{
        printf("it is not a triangle..!");
    }

    return 0;
}
