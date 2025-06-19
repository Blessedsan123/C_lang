#include <stdio.h>

int main() {
    int num;
    printf("Enter the number 1->7: ");
    scanf("%d",&num);
    switch(num){
        case 1 : printf("its Sunday");
        break;
        case 2 : printf("its Monday");
        break;
        case 3 : printf("its Tuesday");
        break;
        case 4 : printf("its Wednesday");
        break;
        case 5 : printf("its Thursday");
        break;
        case 6 : printf("its Friday");
        break;
        case 7 : printf("its Saturday");
        break;
    }
    return 0;
}
