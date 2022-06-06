//Declare, Initialize & print an Array
#include<stdio.h>
int main()
{
	int A[5],i;
	//Intialize Array with n integer
	for(i=0; i<5; i++)

		A[i]=i;
	
	
	//Print the array elements
	for(i=0; i<5; i++)
	{
		printf("A[%d] is: %d\n",i,A[i]);
	}
}
