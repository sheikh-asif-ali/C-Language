#include<stdio.h>
void increment(int);
int main()
{
	int count=10;
	increment(count);
	printf("In main.... count is %d\n",count);
	increment(count);
        printf("In main.... count is %d\n",count);
}
void increment(int count)
{
	count++;
	printf("In function.... count is %d\n",count);
}
