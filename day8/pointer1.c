//1D Array
#include<stdio.h>
void main()
{
	int i, num[5]= {19,25,39,45,59};
	int *iptr=num;
	for (i=0; i<5;i++)
		printf("\n Element num[%d] val: %d .addr. %p \n",i,*iptr,iptr);
	//iptr++; //All 3 sentence are same so using 1 & commenting other 3 
	//iptr=iptr++;
	iptr=iptr+1;
}
