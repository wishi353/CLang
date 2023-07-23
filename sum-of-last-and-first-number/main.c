/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// g ""   ''
int main()
{
    int i,arr[4];
    //printf("Enter the number - ");
   // scanf("%d",&n);
    for(i=0;i<4;i++)
    {
       printf("Enter the value = ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<4;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n %d \n %d",arr[0],arr[3]);
   // printf("Hello World");

    return 0;
}
