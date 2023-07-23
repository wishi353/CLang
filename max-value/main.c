/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,big;
    
    printf("Enter first number = ");
    scanf("%d",&a);
    
    printf("Enter second number = ");
    scanf("%d",&b);
    
    printf("Enter third number = ");
    scanf("%d",&c);
    
    big=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Max=%d",big);

    return 0;
}
