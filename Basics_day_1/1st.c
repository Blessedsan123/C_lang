#include <stdio.h> 
// name : pre-processor statement also known as macro.before compilation begins it includes the content of file.
// it stay on comiler for import..
//<> definesthe location of file
//#include "file name" location is :project folder only+
// "." : present working directory
// compoud statements : more than one line of code.
// (),[],{} opening and closing operators.
// (): function operatos []: index operator
// "." , "->" opeator for accesing any value.


#define pi 3.141

int main() 
// function header also called as signature of the function. default return type is int.
// to distinguish functions the name should be unique.
// void is a keyword not a datatype : that doesnot return any value. 
// a variable having address but doesnot known the datatype then we put void pointers that holds all the datatype address.
{
    int rad; // variable declarartion. user name called as identifiers.Name are same for different scope.
    //identifiers are case sensitive. Starting with only alfabet or underscore. it should not be a keyword.
    //memory allocation after compilation.
    rad = 10; // initiling a variable with some value. first time giving the value.
    rad = 20; // now it is called assign operator. updation.
    // const rad = 30; // it is called qualifier.
    float area = pi * rad * rad; // if we write rad = 020 it will taking it as an octal number.
    printf("Radius  is : %d \nArea is : %f \n",rad,area);
    return 0; // is a keyword. used for control in code.multiple return statements.
}