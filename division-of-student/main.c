/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float x;
    scanf("Enter the percentage of the candidate = ");
    printf("%f",&x);
    
    if(75<=x)
    printf("You secured merit in the exam");
    else
    if(60<=x && 75>x)
    printf("You secured 1st division in the exam");
    else
    if(50<=x && x<60)
    printf("You secured 2nd division in the exam");
    else
    if(35<=x && x<50)
    printf("You secured 3rd division in the exam");
    else
    if(x<35)
    printf("You failed in the exam");
    
    return 0;
}
