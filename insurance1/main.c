/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int age;
    char marital_status,gender;
    
    printf("Enter your age = ");
    scanf("%d",&age);
    
    printf("Enter your gender = ");
    scanf("%c",&gender);
    
    printf("Enter your marital status = ");
    scanf("%c",&marital_status);
    
    if(marital_status=='M')
    printf("Driver is eligible for insurance");
    else
    if(gender=='F')
    if(age>25)
    printf("Driver is eligible for insurance");
    else
    if(age>30)
    printf("Driver is eligible for insurance");
    else
    printf("Driver is not eligible for insurance");
    
    return 0;
}
