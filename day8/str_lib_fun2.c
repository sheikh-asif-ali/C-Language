//String Concatenation example
#include<stdio.h>
int concat(char* ,char* );

void main(void)
{
        char str1[25],str2[25];
        printf("\nEnter first string:\n");
        scanf("%s",str1);
	printf("\nEnter second string:\n");
        scanf("%s",str2);

        concat(str1,str2);
        printf("\nConcatenated string is:'%s'\n", str1);
}

int concat(char *s1,char *s2)
{
        while( *s1!='\0' )
                s1++;
	while( *s2!='\0' )
	{
		*s1=*s2;
		s1++;
		s2++;
	}        
	*s1='\0';
}

