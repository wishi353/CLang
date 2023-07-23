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
    float discount;
    
    scanf("Enter the price of the item = ");
    printf("%d",&x);
    
    scanf("Enter the number of items = ");
    printf("%d",&y);
    
    discount=(10/100)*x*y;
    printf("Discount = %f",discount);

    return 0;
}
