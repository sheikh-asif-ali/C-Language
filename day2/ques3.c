//Develop a C program to add two operands and store the result in one of the operand using addition assignment operator.( a+=b is same as a=a+b)

#include<stdio.h>
int main()
{

        int a,b;
        printf("Enter a & b\n");
        scanf("%d%d",&a,&b);

	a+=b;
	printf("Assigning sum of a&b in a: %d\n",a);
}
