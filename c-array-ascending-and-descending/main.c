/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
	int a[100],b[100],n,i,j;
	printf("Array size: ");
        scanf("%d",&n);
        printf("Elements: ");
        
      for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
            b[i]=a[i];
        }
    
	for ( i = 0; i < n; i++)        
	{
		for ( j = 0; j < n; j++)           
		{
			if (a[j] > a[i])               
			{
				int tmp = a[i]; 
				a[i] = a[j]; 
				a[j]=tmp;
			}  
		}
	}

	for ( i = 0; i < n; i++)                    
	{
		for ( j = 0; j < n; j++)            
		{
			if (b[j] < b[i])              
			{
				int tmp = b[i];     
				b[i] = b[j];            
				b[j] = tmp;     
			}
		}
	}
          
	for (int i = 0; i < n; i++) 
	{
	    
		printf(" %d\t%d\n", a[i],b[i]);
                 
	}

	return 0;
}


