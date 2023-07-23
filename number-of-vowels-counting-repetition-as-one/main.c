/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    char str[100];
    int j,ctr=0,a=0,e=0,i=0,o=0,u=0;
    scanf("%s",str);
    for(j=0;str[j]!='\0';j++)
    {
    if(str[j]=='a'&& a==0)
    a+=1;
    if(str[j]=='e'&& e==0)
    e+=1;
    if(str[j]=='i'&& i==0)
    i+=1;
    if(str[j]=='o'&& o==0)
    o+=1;
    if(str[j]=='u'&& u==0)
    u+=1;
    }
    ctr=a+e+i+o+u;
    printf("%d",ctr);
    return 1;    
}