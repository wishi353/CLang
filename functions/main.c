/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
void sum()
{
    int i,ctr=0;
    int a[4];
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<4;i++)
    if(i%2!=0)
    ctr=ctr+a[i];
    printf("%d",ctr);
}

int main()
{
    sum();
    return 1;
}



