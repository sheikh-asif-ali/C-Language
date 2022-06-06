//1D Array
#include<stdio.h>
void main()
{
        int i, num[5]= {19,25,39,45,59};
        int *iptr=num+4;
        for (i=0; i<5;i++)
        printf("\n Num: %d addr: %u\n",*iptr,iptr);
	iptr--;
}
~   
