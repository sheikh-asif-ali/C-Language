#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter 2 numbers:\n");
	scanf("%d%d",&x,&y);
	if(x>y)
		printf("%d is Bigger number\n",x);
	else
		printf("%d is Bigger number\n",y);

	return 0;
}
