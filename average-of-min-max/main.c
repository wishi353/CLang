/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// g ""
int main()
{
    int a,b,c,aver,max,min;
    printf("enter the values - ");
    scanf("%d%d%d",&a,&b,&c);
    {
        if(a>b && a>c)
        max=a;
        else
        if(b>a && b>c)
        max=b;
        else//(c>a && c>b);
        max=c;
        
        {
        if(a<b && a<c)
        min=a;
        else
        if(b<a && b<c)
        min=b;
        else//(c<a && c<b);
        min=c;  
        }
        //printf("min - (%d)",min);
        //printf("\nmax - (%d)",max);
        aver=(min+max)/2;
        printf("\n%d",aver);
        
    }

    return 0;
}


