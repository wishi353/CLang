/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
int a,b,i,ctr=0;
scanf("%d",&a);
scanf("%d",&b);
for(i=a;i<=b;i++)
{
if(i%3==0&&i%5==0)
ctr=ctr+1;
}
printf("%d",ctr);
return 10;
}
