//Write a program to demonstrate bitwise operators.

#include<stdio.h>
void main()
{
	int ans,a,b;
	printf("Enter any 2 integers\n");
	scanf("%d %d",&a,&b);

	ans=a|b;
	printf("Or Operator a|b is: %d\n",ans);

	ans=a&b;
        printf("And Operator a&b is: %d\n",ans);

	ans=a^b;
        printf("XOR Operator a^b is: %d\n",ans);

	ans=~a;
        printf("Uninary Operator ~a is: %d\n",ans);

        printf("Value of a<<1 is:%d\n",a<<1);
	printf("Value of b>>1 is:%d\n",b>>1);

}
