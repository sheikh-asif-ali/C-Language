// 3. Write a programm to print the prime fibonacci numbers in a given range.//

#include<stdio.h>
void main ()
{
     int n,i,j,x=0,y=1,z;
     printf("Enter the number to print fibonocci prime number \n");
     scanf("%d", &n);
     for(i=1;i<=n;i++)
     {
         z=x+y;
         x=y;
         y=z;
         	printf("\nFibnocci series is: %d\t",z);
         for(j=2;j<=z;j++)
         {
         	if (z%j==0)
         	break;
         }
         if(z==j)
         	printf("\nPrime numbers are: %d\t",z);
         
     }
}    
