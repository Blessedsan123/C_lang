#include <stdio.h>

int main()
{
    int f_angle,s_angle,t_angle;
    printf("All the angles can make 180 dgree ! so give the angles in range..\n");
    printf("Enter first angle : ");
    scanf("%d",&f_angle);
    printf("Enter second angle : ");
    scanf("%d",&s_angle);
    t_angle = 180-(f_angle + s_angle);
    
    if(t_angle < 1){
        printf("Angles are not valid for triangle !");
    }
    else{
        printf("Your third angle is : %d",t_angle);
    }
    return 0;
}

