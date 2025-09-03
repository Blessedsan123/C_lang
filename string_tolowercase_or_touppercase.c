#include<stdio.h>
#include<string.h>
#include<ctype.h>



int main(){
    char name[20] = "Sandeep";
    char l_name[20];
    int choice;
    while(choice!=3){
        printf("enter 1 for lowercase op\nenter 2 for uppercase op\nenter 3 for exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 : 
                for(int i = 0 ; name[i]!='\0'; i++){
                    l_name[i] = tolower(name[i]);
                }
                 printf("Name in lower case : %s\n\n",l_name);
            break;
            case 2: 
                for(int i = 0 ; name[i]!='\0';i++){
                    l_name[i] = toupper(name[i]);
                }
                 printf("Name in lower case : %s\n\n",l_name);
            break;
            case 3 : printf("You 're exited !\n");
            break;
            default : printf("Enter a valid choice !\n");
        }

           
    }
    
    return 0;
}
