#include<stdio.h>
int increment();
void main()
{
	int count;
		count = increment();
	printf("In main count 1st time is %d\n",count);
		count = increment();
        printf("In main count 2nd time is %d\n",count);
		count = increment();
        printf("In main count 3rd time is %d\n",count);

}
int increment()
{
	static int count=0;
		count++;
	printf("In function count is %d\n", count);
		return count;
}
