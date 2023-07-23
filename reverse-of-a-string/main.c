/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[100];
    int i,ctr=0;
    scanf("%s",&str[i]);
    for(i=0;str[i]!='\0';i++)
    {
        ctr=ctr+1;
    }
    //printf("%d",ctr);
    for(i=ctr;i>=0;i--)
    {
    printf("%c",str[i]);
    }
    return 0;
}
