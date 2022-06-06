#include<stdio.h>
int sum(int n);

int main()
{
	int num,s;
	printf("Enter a positive integer:\n");
	scanf("%d",&num);
/* Function Call: Function sum to cal sum of first n integer*/
	s=sum(num);
	printf("Sum: %d\n",s);

	return 0;
}

int sum(int n)
{
	if(n==1) 	//Stop Condition
		return n;
	else
		return n+sum(n-1);	/*self call to function*/
}
