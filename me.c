#include<stdio.h>

int main(){
    printf("Enter your Age : ");
    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("You are eligible for the Vote ");
        printf("\nEnter the no. of times for Vote : " );
        int num;int cand1= 0 ; int cand2 = 0 ; int cand3 = 0; int cand4 = 0; int val;
        scanf("%d",&num);
        for(int i = 0 ; i<num ; i++){
            printf("Enter your Party for vote...\n");
            printf("Enter 1 for cand1\nEnter 2 for cand2\nEnter 3 for cand3\nEnter 4 for cand4");
            printf("\nEnter the Value : ");
            scanf("%d",&val);
            switch(val){
                case 1 : cand1++;
                break;
                case 2 : cand2++;
                break;
                case 3 : cand3++;
                break;
                case 4 : cand4++;
                break;
                default : printf("Enter a valid option !!");
                break;
            }
        }
        int win = cand1;
        if(cand2>win){
            printf("Candidate 2 is the winner with %d votes",cand2);
            win = cand2;    
        }
        if(cand3>win){
            printf("Candidate 3 is the winner with %d votes",cand3);
            win = cand3;    
        }
        if(cand4>win){
            printf("Candidate 4 is the winner with %d votes",cand4);
            win = cand4;    
        }
        if(win == cand1){
            printf("Candidate 1 is the winner with %d votes",cand1);
        }
        printf("\nCandidate 1 got %d votes",cand1);
        printf("\nCandidate 2 got %d votes",cand2);
        printf("\nCandidate 3 got %d votes",cand3);
        printf("\nCandidate 4 got %d votes",cand4);
        printf("\nTotal votes are %d",cand1+cand2+cand3+cand4);
    }
    else{
        printf("You are not eligible for Vote !");
    }
}

