/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char c;
    scanf("%c",&c);
    if(c>64&&c<91)
    printf("%c",c+32);
    else
    if(c>96&&c<123)
    printf("%c",c-32);

    return 0;
}
