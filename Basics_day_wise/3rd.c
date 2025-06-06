#include <stdio.h>
#include <math.h>


int main(){
//write a program to make a simple calculator
//simple operation like + - * / % 


    int a,b;
    int res;
    char op;
    char start;

    printf("Type s for start or q for not start : ");
    scanf(" %c",&start);
    if(start == 'q'){
        printf(" Not started\n");
    }
    else if(start =='s'){

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
    }


// write a program to read 3 subject marks and display the total rounded avg value and grading as follows.


int sub1,sub2,sub3;
int avg;
int total;
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


//write a program to sum of all natural values

int num;
printf("Enter the number : ");
scanf("%d",&num);
int sum = 0 ;

for(int i = 0 ; i<num; i++){ // in forloop
    sum = sum+i;
}

int i = 0 ; // initialization of variable
 while(i<num){ // in while loop
    sum = sum+ i ;
    i++;
 }

do{ // in do-while loop
    sum = sum+i;
    i++; // updation
}while(i<num); // condition

printf("Total sum is : %d\n",sum);

//write a program  to print all the numbers that are divisible by 7 in  the given range 


int range1, range2;
printf("Enter the range1 : ");
scanf("%d",&range1);
printf("Enter the range2 : ");
scanf("%d",&range2);

int i = range1; //initialization
printf("The numbers divisible by 7 in the range %d to %d are \n",range1,range2);
while(i<range2){
    if(i%7==0){
        printf("%d ",i);
    }
    i = i+1;
}

write a program to find perfect square numbers between the given range

int range1, range2;
printf("Enter the range1 : ");
scanf("%d",&range1);
printf("Enter the range2 : ");
scanf("%d",&range2);

int i = ceil(sqrt(range1));// need to remember this concept

while ((i*i)<range2){
    printf("%d\n",(i*i));
    i = i+1;
}

//write a program to find sum of all digits of a given number..

int num;
printf("Enter the number : ");
scanf("%d",&num);

int sum = 0 ;

int copy = num;

while (copy>0){
    sum = sum + (copy%10); // must remember
    copy = (copy/10);
}

printf("Sum of all digits : %d\n",sum);

write a program to find the armstrong number/

int num;
printf("Enter the number : ");
scanf("%d",&num);

int sum = 0 ;
int copy = num;

while (copy>0){
    sum = sum + ((copy%10)*(copy%10)*(copy%10)); // must remember
    copy = (copy/10);
}

if(sum==num){
    printf("it is an angstrom number\n");
}
else{
    printf("it is not an angstrom number\n");

}

//write a program to program lcm and hcf of given two numbers


int num1,num2;
int number1,number2;
printf("Enter the first number : ");
scanf("%d",&num1);
printf("Enter the second number : ");
scanf("%d",&num2);
number1 = num1;
number2 = num2;
int choose;
printf("choose 1 for find hcf\nchoose 2 for find lcm\n");
printf("Enter your choise : ");
scanf("%d",&choose);

int hcf; int lcm;

if(choose == 1){
    int temp;
    while(num2!=0){
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
  hcf = num1;
  printf("The hcf is : %d\n",hcf);
}
if(choose == 2){
    int temp;
    while(num2!=0){
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    hcf = num1;
    lcm = (number1*number2)/hcf;
    printf("The lcm is : %d\n", lcm);
}
    return 0;
}