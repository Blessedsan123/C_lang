#include <stdio.h>

int main()
{
    
    char c;
    printf("Enter one character : ");
    scanf("%c",&c);
    if(c>=97 && c<=122){
        printf("lower case");
    }
   else if(c>=67 && c<=90){
        printf("upper case");
    }

    return 0;
}
