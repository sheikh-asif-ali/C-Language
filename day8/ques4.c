/*4. A C program contains the following declaration 
int x[8]= {10,20,30,40,50,60,70,80}; 
What is the value of x? (and understand)
What is the value of (x+2)? (and understand)
What is the value of *x? 
What is the value of (*x+2)? 
What is the value of *(x+2)?.
*/

#include<stdio.h>

void main()
{
	int x[8]= {10,20,30,40,50,60,70,80};

	for(int i=0;i<8;i++)
	{
		printf("Elements of array are: x[%d]:%d\n",i,x[i]);
	}
	printf("Value of x is: %p\n",x);
	printf("Value of (x+2) is: %p\n",(x+2));
	printf("Value of *x is: %d\n",*x);
	printf("Value of (*x+2) is: %d\n",(*x+2));
	printf("Value of *(x+2) is: %d\n",*(x+2));
}
