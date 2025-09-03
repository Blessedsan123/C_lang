#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char name[20];
    printf("Enter any word : ");
    scanf(" %s",&name);
    char l_name[20];
    for(int i = 0 ; name[i]!='\0'; i++){
        if(islower(name[i])){
            l_name[i] = toupper(name[i]);
        }
        else if(isupper(name[i])){
            l_name[i] = tolower(name[i]);
        }
    }
    l_name[strlen(l_name)] = '\0';
    printf("Toggled name is : %s\n",l_name);
    return 0;
}
