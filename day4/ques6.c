//6. Write a recursive function to find factorial of a number.
#include<stdio.h>
int foo(int);
void main()
{
        int a=987654321,rev;
        rev=foo(a);
	printf("Reverse of %d is= %d",a,rev);
}
int foo(int a)
{
	if(a<10)
		rev=0;
		return a;
	else
		return(foo(a)+rev*10);
}

