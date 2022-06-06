/*4. Write a program in C to display the pattern like right angle triangle as shown pattern below.
1
12
123
1234*/

#include<stdio.h>
void main()
{
	int i,j;
	for (i=1; i<5; i++)
	{
		for(j=1; j<5; j++)
		{
			if(j<=i)
				printf("%d",j);
		}
		printf("\n");

	}
}
