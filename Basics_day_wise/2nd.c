// //1st half

// // indendation in code
// // proper name of file
// // proper name of variables functions.

// //comments : 
// // single line comment : //
// // multiline comment : /* */

#include <stdio.h>

int main(){

    char ch = 's';
    float ft = 32.890f;
    double db = 0.0237869;

    printf("size of the int : %lu\n",sizeof(int));
    printf("size of the float : %lu\n",sizeof(float));
    printf("size of the char : %lu\n",sizeof(char));
    printf("size of the double : %lu\n\n",sizeof(double));

    printf("size of the int : %d decimal = %o octal = %x hexadecimal\n",it,it,it); //%d for decimal , %o for octal , %x for hexadecimal.
    printf("size of the float : %f\n",ft);
    printf("size of the float : %.2f = %e \n",ft,ft); //%e for exponential value
    printf("size of the char : %c\n",ch);
    printf("size of the double : %.3lf = %e \n",db,db); //for print double value the format specifier is longfloat (%lf). %e for exponential value.


    //expilcit type casting : from orinal datatype to anaother type .
    //floating point representation
    // int representation 1) unsigned 2) signed

    char z = 'z';
    char a = 'a';
    char Z = 'Z';
    char o = '0';
    char A = 'A';
    printf("The value of z is : %d = %x\n",z,z);
    printf("The value of a is : %d = %x \n",a,a);
    printf("The value of Z is : %d = %x \n",Z,Z);
    printf("The value of o is : %d = %x \n",o,o);
    printf("The value of A is : %d = %x \n",A,A);


    //implicit and explicite type cast

    int new_val = ch; //automatic type casting or called as promotion.
    printf("new_val : %d\n",new_val);

    unsigned int ui = 5; // unsigned type is greater than signed
    int in = -4;
    if(ui>in){
        printf("ui is greater\n");
    }
    else{
        printf("in is greater\n");
    }


    // explict type casting..
    int x = ft;
    printf("x is : %d\n",x);

    //short qualifier

    short int y = -15;
    printf("size is : %ld\n",sizeof(y));

    short t = 2345; //by default int
    long e = 769668913818; // by default int

    //long qualifier

    long int b = 75858777787878;
    printf("size is : %lu\n",sizeof(long int));

   long long double d = 34.89689889896868;
    printf("size is : %llu\n",sizeof(long long double));



//write a program to check the given number is positive or negetive

int number;
printf("enter a number : ");
scanf("%d",&number);
if(number >= 0 )
{                         // selective or branching statement
    printf("number is positive\n");
}
else{
    printf("number is negetive\n");
}

// binary operator : required two values.
//returns 0 or 1

//!= 0 is true , = 0 is false

// using bit wise operator
// & ^ | ~ 

if(number & 0x8000000 )
{                         // selective or branching statement
    printf("number is negetive\n");
}
else{
    printf("number is positive\n");
}

//using shift operator

if(number & (1 << 31) ) //operator presidence 
{                                    // selective or branching statement
    printf("number is negetive\n");
}
else{
    printf("number is positive\n");
}


int a = 6;
int b = 7;
int res = a+3*b/2-1+6; //starting from left side and taking high presidence operator
printf("result is : %d\n",res);

//write a program to check the number is divisible by 5 and 7

if((number % 5 && number %7)==0) //short circuiting
{
    printf("number is divisiby 5 and 7\n");
}
else{
    printf("number is not divisible by 5 and 7\n");

}

//write a program to check the number is divisible by 5 or 7

if((number % 5 || number %7)==0) //short circuiting
{
    printf("number is divisible \n");
}
else{
    printf("number is not divisible\n");

}

int num = 23;
// num++; //post increment;
++num; // pre increment
printf("%d",num);


int p;
p=  num++;
printf("%d\n",num);
printf("%d\n",p);

//conditinal/ternary operator
//write a program print number is even or odd

int num;
printf("Enter the number : ");
scanf("%d",&num);
(num%2==0)? printf("even number\n") : printf("odd number\n");

int a = 17;
int b = 34;
int max = (a>b)? a:b; //find max nuber between two numbwers
printf("Max is : %d\n",max);


//write a programm to find the leap year.
int num;
printf("Enter the number : ");
scanf("%d",&num);
if(num%100==0){
    printf("it is a century year\n");
    if(num%400==0){
        printf("it is a leap year\n");
    }
    else{
        printf("it is not a leap year\n");
    }
}
else if(num%4==0){
    printf("it is a leap year\n");
}
else{
    printf("it is not a leap year\n");
}


//using ternary operator
(num%400==0 || (num%4==0 &&  num%100!=0)) ? printf("leap year") : printf("not a leap year");


//write a program to find minimum value..

int a = 9;
int b = 40;
int c = 90;
int d = 89;

int min = a ;
if(min>b){
  min = b;
}
if(min>c){
    min = c;
}

if(min>d){
    min = d;
}

printf("the min value is : %d\n",min);
    
    return 0;
}
