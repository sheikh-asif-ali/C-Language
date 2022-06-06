#include<stdio.h>
int main()
{
	int i, num=5;
	printf("The Multiplication Table of %d is:\n",num);
	for(i=1;i<=10;i++)
	{
		printf("%d\n",num*i);
	}
	return 0;
}

