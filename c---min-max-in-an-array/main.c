/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int arr[10],i,n,max,min;
   printf("Enter the number of elements to be entered in array: ");
   scanf("%d",&n);
   printf("Eneter the elements in array:\n");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   min=max=arr[0];
   for(i=0;i<n;i++)
   {
       if(min>arr[i])
       {
           min=arr[i];
       }
       if(max<arr[i])
       {
           max=arr[i];
       }
   }
   printf("Max = %d\nMin = %d",max,min);
   

    return 0;
}
