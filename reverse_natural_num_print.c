#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the range  : ");
    scanf("%d",&n);
    i=n;
    while(i>0){
        printf("%d\n",i--);
    }
    return 0;
}
