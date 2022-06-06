// Develop a C program to perform operations (+,*,-, / and %) on two whole numbers. Identify suitable data types to represent the numbers and resultant values.

#include<stdio.h>

void main()
{
	;
	int add,sub;	
	printf("Enter any 2 integers \n");
	scanf("%f%f",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	dvd=a%b;
	
	printf("Addition is : %d\n",add);
	printf("Substraction is : %d\n",sub);
	printf("Multiplication is : %f\n",mul);
	printf("Division is : %f\n",div);
	printf("Divident is = %f\n",dvd);
	
}

