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
    int i;
    printf("Enter a name - ");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2==0)
        {
            printf("%c",a[i]);
        }
    
    }
    return 0;
}
