//Develop a C program which adds all numbers from 1 to N, except those which are divisible by 5. Implement this using for loop and continue statement. 

#include<stdio.h>

void main()
{
	int i,n,add=0;
	printf("Enter the n'th number\n");
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		if((i%5)!=0)
		{ 
		add=i+add;
		}
	}
	printf("Addition of whole series is: %d\n",add);
}


