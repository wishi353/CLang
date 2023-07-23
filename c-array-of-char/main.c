/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    char arr1[1000][100],arr2[1000][100];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<100;j++)
        {
            arr2[i][j]=arr1[i][j];
        }
    }
    printf("Items with person 2:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",arr2[i]);
    }
    return 0;
}

