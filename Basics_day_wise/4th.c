#include <stdio.h>
//write a program to guess a single digit number

int main(){
    
    int num;
    int result = 7;
    int max_atmpt = 3;

    do{
    printf("Enter a single digit number : ");
    scanf("%d",&num);

    if(num!= result){
        printf("Wrong guess ! Try again\n");
        max_atmpt--;
        printf("You have %d attempts left\n",max_atmpt);
    }
    if(num==result){
         printf("You guess the Correct number, Congracts !!\n");
         break;
    }
    }while(max_atmpt>0);
}

// write a program to make a simple calculator
// simple operation like + - * / % 
#include <stdio.h>
#include <math.h>

int main(){

    int a,b;
    int res;
    char op;
    char start;
    char choice;

    printf("Type s for start or q for not start : ");
    scanf(" %c",&start);
    if(start == 'q'){
        printf(" Not started\n");
    }
    else if(start =='s'){

    do{
    printf("enter the first number  : ");
    scanf("%d",&a);
    printf("enter the second number  : ");
    scanf("%d",&b);
    printf("operations available  : + - * / modulus\n");
    printf("enter the character : ");
    scanf(" %c",&op);// space is mendetory befor the format specifier which entering any character.
    if((op == '/' || op == '%') && b == 0)
    {
      printf("no division should possible\n");
    }
    else{

    switch(op) // it doesnot support boolean and floating point values. must know the values of the expression.
    {
        case '+' : res = a+b;
        break;
        case '-' : res = a-b;
        break;
        case '*' : res = a*b;
        break;
        case '/' :  res = a/b;
        break;
        case '%' : res = a%b;
        break;
        default : printf("invalid input");

    }
    printf("the result is : %d\n",res);
}
    printf("Would you like to continue (Y/N) : ");
    scanf(" %c",&choice);
    }while(choice == 'Y' || choice == 'y');
}


//write a program to take3 sub marks and calculate the total and avg ....

int sub1,sub2,sub3;
int avg;
int total;
char choice;
do{
printf("Enter the sub1 mark : ");
scanf("%d",&sub1);
printf("Enter the sub2 mark : ");
scanf("%d",&sub2);
printf("Enter the sub3 mark : ");
scanf("%d",&sub3);

total = sub1+sub2+sub3;
avg = ceil(total/3);

printf("Total mark is  : %d \nyour avg mark is : %d\n",total,avg);

if(avg>=85){
    printf("You got O grade\n");
}
if(80>avg && avg>=70){
    printf("You got E grade\n");
}
if(70>avg && avg>=60){
    printf("You got A grade\n");
}
if(60>avg && avg>=50){
    printf("You got O grade\n");
}
if(sub1<50 || sub2<50 || sub3<50){
    printf("You got fail\n");
}
printf("Do you want to continue ? (Y/N) : ");
scanf(" %c",&choice);
}while(choice == 'Y' || choice == 'y');


//Siimple calculator in a style ....

    int a,b;
    int res;
    char start;
    char choice;
    int val;

    printf("Type s for start or q for not start : ");
    scanf(" %c",&start);
    if(start == 'q'){
        printf(" Not started\n");
    }
    else if(start =='s'){

    do{

    printf("\n***********************************************************\n");
    printf("\n**********|| Simple Calculator Operations ||***************\n");
    printf("\n***********************************************************\n\n");

    printf("1 : Addition\n");
    printf("2 : Subtraction\n");
    printf("3 : Multipication\n");
    printf("4 : Division\n");
    printf("5 : Reminder\n");
    printf("6 : Exit\n\n");

    printf("Enter Your Choice : ");
    scanf("%d",&val);    

    if(val == 6){
        break;
    }
    if(val < 1 || val >6){
        printf("Wrong choice ! Select again");
        continue;
    }

    printf("enter the first number  : ");
    scanf("%d",&a);
    printf("enter the second number  : ");
    scanf("%d",&b);


    switch(val) // it doesnot support boolean and floating point values. must know the values of the expression.
    {
        case 1 : res = a+b;
        break;
        case 2 : res = a-b;
        break;
        case 3 : res = a*b;
        break;
        case 4 : res = a/b;
        break;
        case 5 : res = a%b;
        break;

    }
    printf("the result is : %d\n",res);
    printf("Would you like to continue (Y/N) : ");
    scanf(" %c",&choice);
    }while(choice == 'Y' || choice == 'y');

}


//write a program to find factorial of a given number
// for int value limmitation upto 31;
// for long value limmitation upto 65;
// for unsigned int limmitation is 33;

//write a program to display a multipication table given n

int num;
printf("Enter the number : ");
scanf("%d",&num);
int res;

    printf("The table is : \n");
for(int i =1; i<=10 ; i++){
    res  = num*i;
    printf("%d x %d = %d\n",num,i,res);
}

//write a program to display multipication table from m to n 

int m,n;
printf("Enter the m Value : ");
scanf("%d",&m);
printf("Enter the n value : ");
scanf("%d",&n);

for(int k = m; k<=n; k++){
    printf("\nEnter in %d table \n",k);
    printf("-------------------\n");
    for(int i = 1; i<=10; i++){
        printf("%d x %d = %d\n",k,i,k*i);
    }
}


//write a program to find whether a given no. is prime or not

int num;
int flag;
int i;
printf("Enter the number : ");
scanf("%d",&num);

if(num == 1 || num == 2){
    printf("It is a prime number\n");
}

for (i = 3, flag = 1; i< num/2 ; i=i+2){
    if(num % i == 0){
        flag = 0;
        break;
    }
}
if(flag){
    printf("it is a prime number\n");
}
else{
    printf("It is a not prime number\n");
}

//write a program to find the prime number between the given range

int num;
int flag;
int i;
int start,end;
int count = 0 ;
printf("Enter start range : ");
scanf("%d",&start);
printf("Enter end range : ");
scanf("%d",&end);
printf("Prime numbers between the range %d and %d \n",start,end);
for(num = start; num<=end; num++)
{
    flag = 1;
    for (i = 2; i< num/2 ; i++){
    if(num % i == 0){
        flag = 0;
        break;
    }
}
if(flag){
    printf("%d\n",num);
    count++;
}
}
printf("total prime numbers : %d\n",count);
return 0;
}