#include <stdio.h>

int main()
{ 
    char c;
    printf("Enter the character : ");
    scanf("%c",&c);
    ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) ?printf("it is a alphabate") : printf("It is not a alpahbate");
    return 0;
}
