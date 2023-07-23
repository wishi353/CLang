/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int binary[20],i,count=0,n,a;
    scanf("%d",&n);
    for(i=0;i<20;i++)
    {
        a=n%2;
        n=n/2;
        binary[i]=a;
    }
    
    for(i=19;i>=0;i--)
    {
        printf("%d",binary[i]);
    }
    return 0;
}
