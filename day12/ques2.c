/* 2. Write a program addition of two numbers of int or char or float using condition compilation*/

#include <stdio.h>
#define FLOAT 1

int main()
{
	int a=4,b=2,c;
	float d=2.5, e=3.2,f;
	
	c= a+b;
	f= d+e;
	
	#ifdef INT
	printf("Addition of two int number %d and %d is: %d\n",a,b,c);
	#else 
	printf("Addition of two float  number %.2f and %.2f is: %.2f\n",d,e,f);
	#endif
}

