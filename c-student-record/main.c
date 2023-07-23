/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    struct student
{
    char name[100];
    int phn;
    int m[10];
    int sum;
    int avg;
    float med;
    
};
int i,j,t;
struct student s1,s2,s3,s4,s5;
printf("Student 1:\n");
printf("Enter name: ");
scanf("%s",s1.name);
printf("Enter the phone number: ");
scanf("%d",&s1.phn);
s1.sum=0;
printf("Enter marks in 10 subjects: ");
for(i=0;i<10;i++)
{
scanf("%d",&s1.m[i]);
s1.sum=s1.sum+s1.m[i];
}
s1.avg=s1.sum/10;
for(i=1 ; i <= 9 ; i++) {  
   for (j=1 ; j <= 10-i ; j++) {  
      if ( s1.m[j] <= s1.m[j+1] ) {  
         t = s1.m[j];  
         s1.m[j] = s1.m[j+1];  
         s1.m[j+1] = t;  
      } else  
      continue;  
   }  
}
   s1.med = (s1.m[4] + s1.m[5])/2;  

printf("Student 2:\n");
printf("Enter name: ");
scanf("%s",s2.name);
printf("Enter the phone number: ");
scanf("%d",&s2.phn);
s2.sum=0;
printf("Enter marks in 10 subjects: ");
for(i=0;i<10;i++)
{
scanf("%d",&s2.m[i]);
s2.sum=s2.sum+s2.m[i];
}
s2.avg=s2.sum/10;
for(i=1 ; i <= 9 ; i++) {  
   for (j=1 ; j <= 10-i ; j++) {  
      if ( s2.m[j] <= s2.m[j+1] ) {  
         t = s2.m[j];  
         s2.m[j] = s2.m[j+1];  
         s2.m[j+1] = t;  
      } else  
      continue;  
   }  
}
   s2.med = (s2.m[4] + s2.m[5])/2;  

printf("Student 3:\n");
printf("Enter name: ");
scanf("%s",s3.name);
printf("Enter the phone number: ");
scanf("%d",&s3.phn);
s3.sum=0;
printf("Enter marks in 10 subjects: ");
for(i=0;i<10;i++)
{
scanf("%d",&s3.m[i]); 
s3.sum=s3.sum+s3.m[i];
}
s3.avg=s3.sum/10;
for(i=1 ; i <= 9 ; i++) {  
   for (j=1 ; j <= 10-i ; j++) {  
      if ( s3.m[j] <= s3.m[j+1] ) {  
         t = s3.m[j];  
         s3.m[j] = s3.m[j+1];  
         s3.m[j+1] = t;  
      } else  
      continue;  
   }  
}
   s3.med = (s3.m[5] + s3.m[5])/2;  

printf("Student 4:\n");
printf("Enter name: ");
scanf("%s",s4.name);
printf("Enter the phone number: ");
scanf("%d",&s4.phn);
s4.sum=0;
printf("Enter marks in 10 subjects: ");
for(i=0;i<10;i++)
{
scanf("%d",&s4.m[i]);
s4.sum=s4.sum+s4.m[i];
}
s4.avg=s4.sum/10;
for(i=1 ; i <= 9 ; i++) {  
   for (j=1 ; j <= 10-i ; j++) {  
      if ( s4.m[j] <= s4.m[j+1] ) {  
         t = s4.m[j];  
         s4.m[j] = s4.m[j+1];  
         s4.m[j+1] = t;  
      } else  
      continue;  
   }  
}
   s4.med = (s4.m[4] + s4.m[5])/2;  

printf("Student 5:\n");
printf("Enter name: ");
scanf("%s",s5.name);
printf("Enter the phone number: ");
scanf("%d",&s5.phn);
s5.sum=0;
printf("Enter marks in 10 subjects: ");
for(i=0;i<10;i++)
{
scanf("%d",&s5.m[i]);  
s5.sum=s5.sum+s5.m[i];
}
s5.avg=s5.sum/10;
for(i=1 ; i <= 9 ; i++) {  
   for (j=1 ; j <= 10-i ; j++) {  
      if ( s5.m[j] <= s5.m[j+1] ) {  
         t = s1.m[j];  
         s5.m[j] = s5.m[j+1];  
         s5.m[j+1] = t;  
      } else  
      continue;  
   }  
}
   s5.med = (s5.m[4] + s5.m[5])/2;  
   
printf("\n\nEntered Information:\n");
printf("Student 1: \n");
printf("Name: %s\n",s1.name);
printf("Phone number: %d\n",s1.phn);
printf("Marks in 10 subjects: \n");
for(i=0;i<10;i++)
{
printf("Subject %d: %d\n",i+1,s1.m[i]);
}
printf("Average: %d\n",s1.avg);
printf("Median: %f\n\n",s1.med);
printf("Student 2: \n");
printf("Name: %s\n",s2.name);
printf("Phone number: %d\n",s2.phn);
printf("Marks in 10 subjects: \n");
for(i=0;i<10;i++)
{
printf("Subject %d: %d\n",i+1,s2.m[i]);
}
printf("Average: %d\n",s2.avg);
printf("Median: %f\n\n",s2.med);
printf("Student 3: \n");
printf("Name: %s\n",s3.name);
printf("Phone number: %d\n",s3.phn);
printf("Marks in 10 subjects: \n");
for(i=0;i<10;i++)
{
printf("Subject %d: %d\n",i+1,s3.m[i]);
}
printf("Average: %d\n",s3.avg);
printf("Median: %f\n\n",s3.med);
printf("Student 4: \n");
printf("Name: %s\n",s4.name);
printf("Phone number: %d\n",s4.phn);
printf("Marks in 10 subjects: \n");
for(i=0;i<10;i++)
{
printf("Subject %d: %d\n",i+1,s4.m[i]);
}
printf("Average: %d\n",s4.avg);
printf("Median: %f\n\n",s4.med);
printf("Student 5: \n");
printf("Name: %s\n",s5.name);
printf("Phone number: %d\n",s5.phn);
printf("Marks in 10 subjects: \n");
for(i=0;i<10;i++)
{
printf("Subject %d: %d\n",i+1,s5.m[i]);
}
printf("Average: %d\n",s5.avg);
printf("Median: %f\n\n",s5.med);

printf("\n\n Update phone numbers:\n");
printf("Student 1: ");
scanf("%d",&s1.phn);
printf("Student 2: ");
scanf("%d",&s2.phn);
printf("Student 3: ");
scanf("%d",&s3.phn);
printf("Student 4: ");
scanf("%d",&s4.phn);
printf("Student 5: ");
scanf("%d",&s5.phn);

printf("\n\nPhone numbers of Students after updating\n");
printf("Student 1 Phone number: %d\n",s1.phn);
printf("Student 2 Phone number: %d\n",s2.phn);
printf("Student 3 Phone number: %d\n",s3.phn);
printf("Student 4 Phone number: %d\n",s4.phn);
printf("Student 5 Phone number: %d\n",s5.phn);

    return 0;
}


