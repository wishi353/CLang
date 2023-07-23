/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[50];
    int i,ctr=0;
    scanf("%s",str);
    for(i=0;str[i]!= '\0';i++)
    {
        if (str[i]== 'a'||str[i]== 'e'||str[i]== 'i'||str[i]== 'o'||str[i]== 'u')
        ctr=ctr+1;
    }
    printf("%d",ctr);

    return 0;
}
