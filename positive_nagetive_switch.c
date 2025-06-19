#include <stdio.h>
int main() {
    
    int num; int sel;
    printf("Enter the num : ");
    scanf("%d",&num);
    printf("Enter 1 for check even or odd or 0 for exit : ");
    scanf("%d",&sel);
    
    switch(sel){
        case 1 : (num>=0) ? printf("positive number") : printf("negetive number");
        break;
        case 0 : printf("Exit");
        break;
        default : printf("invalid input");
    }
    return 0;
}
