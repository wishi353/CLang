/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// g ""   ''
// printing second half of a string
int main()
{
    char a[100];
    int i,ctr=0,b;
    printf("Enter a name - ");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        ctr=ctr+1;
    }
    b=(ctr/2);
    for(i=b;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    for(i=0;i!=b;i++)
    {
       printf("%c",a[i]); 
    }
   // printf("Hello World");

    return 0;
}

