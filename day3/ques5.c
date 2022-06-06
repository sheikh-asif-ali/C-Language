/*5. Write a C program to display the pattern like right angle triangle as shown pattern below.

1
22
333
4444*/

#include<stdio.h>
void main()
{
        int i,j,num=1;
        for (i=1; i<5; i++)
        {
                for(j=1; j<5; j++)
                {
                        if(j<=i)
                                printf("%d",num);
                }
                printf("\n");
		num++;

        }
}

