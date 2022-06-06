//String call-by reference example
#include<stdio.h>
int length(char* );

void main(void)
{
	int len;
	char str1[50];
	printf("\nEnter string whose lenght has to be found:");
	scanf("%s",str1);
	
	len=length(str1);
	printf("\nLength of string %s is %d\n", str1,len);
}

int length(char *s1)
{
	int l=0;
	while( *s1!='\0' )
	{
		l++;
		s1++;
	}
	return l;
}
	
