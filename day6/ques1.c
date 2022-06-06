/*1. Write a C program to perform the following operations on two strings using intrinsic functions.*/

#include<stdio.h>
#include<string.h>

void main()
{
	char s1[100]="Knowledge Park CDAC", s3[100];
	char s2[100]="CDAC", s4[100], *i;
	int l;

	printf("Operations on Two Strings using Intrinsic Functions\n\n");
	printf("First String is: %s\n",s1);
	printf("Second String is: %s\n",s2);
	
	//Length of String1
	printf("\nThe lenght of first string is: %ld\n",strlen(s1));
	//Length of String2
	printf("The lenght of second string is: %ld\n\n",strlen(s2));

	//Compare two strings
       	l=strcmp(s1,s2);
	if(l<0)
                printf("String-2 is longer\n\n");
        else if(l>0)
                printf("String-1 is longer\n\n");
        else
                printf("Both are equal\n\n");
	
	//Copy String
	strcpy(s3,s1);
	strcpy(s4,s2);
	printf("Copied String-1 to String-3 is: %s\n",s3);
	printf("Copied String-2 to String-4 is: %s\n\n",s4);

	//Subset(strstr)
	i=strstr(s1,s2);
	if(i)
		printf("String-2 is subset of String-1 & the string is: %s\n\n",i);
	else
		printf("No subset found\n\n");

	//Concatenate two string
	printf("Concatenation of both string is: %s\n",strcat(s1,s2));
}
