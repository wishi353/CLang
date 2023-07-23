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
    
    printf("Enter first number = ");
    scanf("%d",&x);
    
    printf("Enter second number = ");
    scanf("%d",&y);
    
    printf("Enter third value = ");
    scanf("%d",&z);
    
    if(x>y)
    if(x>z)
    printf("The max value = %d",x);
    else
    printf("The max value = %d",z);
    else
    if(y>z)
    printf("The max value = %d",y);
    else
    printf("The max value = %d",z);
    
    return 0;
}
