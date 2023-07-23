/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int fib(int x) 
{
   if((x==1)||(x==0))
   {
      return(x);
   }else 
   {
      return(fib(x-1)+fib(x-2));
   }
}
int main() {
   int x , i=1;
   printf("Enter the number of terms of series : ");
   scanf("%d",&x);
   printf("Fibonnaci Series : ");
   while(i <= x) {
      printf("%d ",fib(i));
      i++;
   }
   return 0;
}

