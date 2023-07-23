/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

//int main()

/*    
Program to input 2 characters and type and store the addition of 
*/
void sum ()
{
    //int a,b,ans;
    char a;
    char b;
    int c;
    printf("\n ENTER VALUE OF A=");
    scanf("%c",&a);
    fflush(stdin);
    
    printf("\n ENTER VALUE OF B=");
    fflush(stdin);
    
    //scanf("%c",&b);
    b=getchar();
    /*ans=a+b;
    printf("\n A=%d",a);
    printf("\n B=%d",b);
    printf("\n C=%d", ans);
    */
    c=(int)a+(int)b;
    printf("Answer=%d",c);
    
}

int main()
{
    //clrscr();
    sum();
    //getch();
    
}
