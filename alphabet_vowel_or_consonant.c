#include <stdio.h>

int main() {
    
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    switch(c){
        case 'a' : printf("vowel char");
        break;
        case 'e' : printf("vowel char");
        break;
        case 'i' : printf("vowel char");
        break;
        case 'o' : printf("vowel char");
        break;
        case 'u' : printf("vowel char");
        break;
        case 'A' : printf("vowel char");
        break;
        case 'E' : printf("vowel char");
        break;
        case 'I' : printf("vowel char");
        break;
        case 'O' : printf("vowel char");
        break;
        case 'U' : printf("vowel char");
        break;
        default : printf("consonant char");
    }
    return 0;
}
