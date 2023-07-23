/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    printf("Enter third number");
    scanf("%d",&c);
    if((a>b&&b>c)||(c>b&&b>a))
    printf("%d",b);
    else
    {
    if((b>a&&a>c)||(c>a&&a>b))
    printf("%d",a);
    else
    {
    if((b>c&&c>a)||(a>c&&c>b))
    printf("%d",c);
    }
    }
    //printf("Hello World");

    return 0;
}
