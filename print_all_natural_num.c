#include <stdio.h>

int main() {
    int n,i = 1;
    printf("Enter the range  : ");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i++);
    }
    return 0;
}
