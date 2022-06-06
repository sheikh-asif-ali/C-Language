#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter an integer\n");
	scanf("%d",&n);
	printf("Table of %d is:\n",n);
	while(i<=10)
	{
		printf("%d\n", n*i++);
	}
	return 0;
}

