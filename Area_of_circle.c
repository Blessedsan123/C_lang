#include <stdio.h>

void circle_info(float radius){
    printf("diameter : %.2f", 2*radius);
    printf("\ncircumference : %.2f", 2*3.14*radius);
    printf("\nArea : %.2f",3.14*radius*radius);
}

int main() {
    int rad;
    printf("Enter the radius : ");
    scanf("%d",&rad);
    circle_info(rad);
    return 0;
}
