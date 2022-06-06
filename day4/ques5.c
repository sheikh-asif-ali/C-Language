//5. Write a program to reverse an integer number. Use recursion.
#include<stdio.h>
void main()
{
	int a=12345,b,rem;
	int rev=0;
	b=a;
	printf("Reverse of %d =",a);
	while(b>0)
	{
		rem=b%10;
		b=b/10;
		rev= rem+rev*10;
	}
	printf("%d\n",rev);
}
