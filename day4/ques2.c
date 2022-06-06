//2. Write a program to find the GCD of two numbers. Take two integers as input, find the GCD and return it to main.

#include<stdio.h>

int gcd(int, int);
void main()
{
	int x,y;
	printf("Enter any two numbers\n");
	scanf("%d%d",&x,&y);
	printf("GCD is: %d\n",gcd(x,y));
}
int gcd(int x,int y)
{
	if(x==0)
		return y;
	else if(y==0)
		return x;
	else
		gcd(y,x%y);
}

