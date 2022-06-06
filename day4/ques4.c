//4. Take the range of number as input and print all the prime fibonacci numbers as output use function try with non-recursive an recursive function.

#include<stdio.h>
void fibo(int n);
void main()
{
	int n;
	printf("Enter last number of series\n");
	scanf("%d",&n);
	printf("0\t1");
	fibo(n-2);
}
void fibo(int n)
{
	static int a=0,b=1,c;

	if(n>0)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\t%d\t",c);
		fibo(n-1);
	}
}
