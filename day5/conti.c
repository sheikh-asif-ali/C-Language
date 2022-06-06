#include<stdio.h>
void main()
{
	int i=0;
	for(i=0; i<10; i++)
	{
		if(i==5|| i==6)
		{
			printf("\n Skipping %d from displaying using continue\n",i);
			continue;
		}
		printf("%d",i);
	}
}
