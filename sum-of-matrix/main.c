/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mat1[30][30];
    int i,j,r,c;
    scanf("%d",&r);
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&mat1[i][j]);
    }
    int mat2[30][30];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&mat2[i][j]);
    }
    int sum[30][30];
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                sum[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d ",sum[i][j]);
        printf("\n");
    }
    return 0;
}
