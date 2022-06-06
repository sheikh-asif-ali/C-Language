/*6. Write a C program to display the pattern like right angle triangle as shown pattern below.
1
2 3
4 5 6
7 8 9 10*/
 

#include<stdio.h>
void main()
{
        int i,j,num=1;
        for (i=1; i<5; i++)
        {
                for(j=1; j<5; j++)
                {
                        if(j<=i)
                                printf("%d\t",num++);
                }
                printf("\n");

        }
}

