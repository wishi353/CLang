/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("Max-%d",a);
    else
    if(b>a&&b>c)
    printf("Max-%d",b);
    else
    printf("Max-%d",c);
    if(a<b&&a<c)
    printf("Min-%d",a);
    else
    if(b<a&&b<c)
    printf("Min-%d",b);
    else
    printf("Min-%d",c);
    

    return 0;
}
