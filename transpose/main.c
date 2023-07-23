/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// g   ""
int main()
{
    int i,j,m,n,mat[100][100],trp[100][100];
    printf("Enter number of rows - ");
    scanf("%d",&m);
    printf("Enter number of columns - ");
    scanf("%d",&n);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Before Transpose:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            trp[j][i]=mat[i][j];
        }
    }
    printf("After transpose:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",trp[i][j]);
        }
        printf("\n");
    }
    
    //printf("Hello World");

    return 0;
}
