/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define yo main
int yo()
{
    int a, fact=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        fact = fact*i;
    }
    printf("factorial of %d is %d",a,fact);
    return 0;
}
