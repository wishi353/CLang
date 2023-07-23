/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y;
    
    scanf("Enter the first value = ");
    printf("%d",&x);
    
    scanf("Enter the second value = ");
    printf("%d",&y);
    
    if(x>y)
    printf("The max value = %d",x);
    else
    printf("The max value = %d",y);

    return 0;
}
