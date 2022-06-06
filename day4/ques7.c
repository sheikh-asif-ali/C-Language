//7. Write a function to swap contents of two variables using functions

#include<stdio.h>
int swap(int, int);
void main()
{
	int x,y;
	printf("Enter 2 integers\n");
	scanf("%d\n%d",&x,&y);
	swap(x,y);
}
int swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After Swapping A= %d, B= %d\n",a,b);
}
