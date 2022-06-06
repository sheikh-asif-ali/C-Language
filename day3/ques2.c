//Develop a C program to find sum of all odd numbers upto N using while loop.

#include<stdio.h>

void main()
{
	int i=1,n;
	int sum=0;
	printf("Enter the n'th number\n");
	scanf("%d",&n);
	
	while(i<=n)
	{
	       if(i%2!=0)
	       {	       
		       sum=i+sum;
	       }
	       i++;
	}
	printf("Sum of ODD integers are: %d\n",sum);
}

