#include <stdio.h>
int main() {
    
    int num; int sel;
    printf("Enter the num : ");
    scanf("%d",&num);
    printf("Enter 1 for check even or odd or 0 for exit : ");
    scanf("%d",&sel);
    
    switch(sel){
        case 1 : (num%2==0) ? printf("Even num") : printf("Odd num");
        break;
        case 0 : printf("Exit");
    }
    return 0;
}
