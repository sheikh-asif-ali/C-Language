//Write a program to find whether given number is palindrome or not. 

#include<stdio.h>

void main()
{
	int temp,i,j,s=0;
	printf("Enter the number: ");
	scanf("%d",&i);
	temp=i;

	while(i>0)
	{
		j=i%10;
		s=(s*10)+j;
		i=i/10;
	}
	if(temp==s)
		printf("Number is palindrome \n");
	else
		printf("Number is not palindrome\n ");
}
