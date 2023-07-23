/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,m,n,j,ctr1=0,ctr2=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        {
        for(j=2;j<=i;j++)
        if(i%j==0)
        ctr1=ctr1+1;
        else
        ctr2=ctr2+1;
        }
    }
    if(i>n)
    printf("Prime number : %d\n",ctr2);
    printf("Not Prime number : %d",ctr1);

    return 0;
}
