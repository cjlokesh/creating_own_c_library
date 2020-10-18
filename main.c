#include <stdio.h>  //Including the standard input/output header library
#include "header.h" //Including the own library header file

// Main program
int main()
{
    //invoking the getPassedNumber() which is defined in header.h
    printf("The number passed: %d\n", getPassedNumber(5));
}