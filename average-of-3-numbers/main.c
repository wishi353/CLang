/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y,z;
    float avg;
    
    printf("Enter first number = ");
    scanf("%d",&x);
    
    printf("Enter second number = ");
    scanf("%d",&y);
    
    printf("Enter third number = ");
    scanf("%d",&z);
    
    avg=(x+y+z)/3;
    printf("Average of 3 numbers = %f",avg);

    return 0;
}
