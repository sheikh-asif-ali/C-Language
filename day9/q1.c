/*1. Lower case to Uppercase: Convert a string from lower case to uppercase using pointers. Write a separate function to do the conversion. Do not use intrinsic functions. */

#include<stdio.h>
void main()
{
	char str[100];
	printf("Enter any lower case string: \n");
	scanf("%s",str);
	for(int i=0; str[i]!='\0'; i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	}
	printf("Converted Uppercase String is: %s\n",str);
}


