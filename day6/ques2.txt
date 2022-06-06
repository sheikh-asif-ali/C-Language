/*2. Write a C program to perform the following operations on two strings without using string library functions.
 *    	    ▪ Concatenate two strings
            ▪ Find the length of each string
            ▪ Compare two strings
            ▪ Copy string
            ▪ Reverse the string*/

#include<stdio.h>

void main()
{
	char s1[100], s2[100], s3[100],temp;
	int s,i,j,n;

	printf("Operations on Two Strings without using String Library Functions\n\n");
	printf("Enter First String\n");
	scanf("%s",s1);
	printf("Enter Second String\n");
	scanf("%s",s2);
	printf("Press 1 for Length\nPress 2 for Compare\nPress 3 for Copy\nPress 4 for Reverse\nPress 5 for Concatenate\n");
	scanf("%d",&s);
	
	switch(s)
	{
		case 1:
			//Length of String1
			for (i=0; s1[i]!= '\0'; i++);
			printf("Length of first string is: %d\n", i);
			
			//Length of String2
			for (j=0; s2[j]!= '\0'; j++);
			printf("Length of second string is: %d\n", j);

		break;
		case 2:
			//Compare two strings
       			for(i=0; s1[i]==s2[i]&&s1[i]=='\0'; i++);
				if(s1[i]<s2[i])
					printf("String-2 is larger\n");
				else if(s1[i]>s2[i])
					printf("String-1 is larger\n");
				else
					printf("Both are equal\n");

		case 3:
			//Copy String
			while(s1[i]!='\0' || s2[i]!='\0')
			{
				s3[i]=s1[i];
				s1[i]=s2[i];
				s2[i]=s3[i];
				i++;
			}
			//s2[i]='\0';
			printf("After Copying\n");
			printf("First String becomes: %s\n",s1);
			printf("Second String becomes: %s\n",s2);
		break;
		case 4:
			//Reverse String
			for(n=0; s1[n]!='\0';n++);
			for(i=0,j=n-1;i<j;i++,j--)
			{
      			temp = s1[j];
      			s1[j] = s1[i];
      			s1[i] = temp;
      			}
			printf("\nReverse string is :%s\n", s1);
			
			for(n=0; s2[n]!='\0';n++);
                        for(i=0,j=n-1;i<j;i++,j--)
                        {
                        temp = s2[j];
                        s2[j] = s2[i];
                        s2[i] = temp;
                        }
                        printf("\nReverse string is :%s\n", s2);
		break;
		case 5:
			//Concatenate two string
			for(i=0;s1[i]!='\0';i++);
			for(j=0;s2[j]!='\0';j++,i++)
			{
				s1[i]=s2[j];
			}
			s1[i]='\0';
			printf("After concatenation: %s\n",s1);
		break;
                default:
                        printf("Incorrect Input, Try Again\n");
        }
}
