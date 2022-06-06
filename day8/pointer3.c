//Multiple pointer examples
#include<stdio.h>
void main()
{
	int i;
	char *ptr= "C Program";
	/* 
	char ch='c';
	char *ch_ptr=&ch;

	int i=20;
	int *i_ptr=&i;

	float f=1.2000;
	float *f_ptr=&f;

	printf("[%c], [%d], [%f]\n",*ch_ptr,*i_ptr,*f_ptr);
	*/
	printf("\n *ptr is '%c' \n", *ptr);
	printf("\n *(ptr+7) is '%c' \n", *(ptr+7));

	for(i=0;i<10;i++)
		printf("%c", *(ptr+i));
	printf("\n");
}
