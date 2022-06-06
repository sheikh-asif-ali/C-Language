#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],ch;
	int i, len=0;

	printf("Enter a string:");
	gets(s);


	for(i=0; s[i]!='\0';i++)
	{
		++len;
	}
	printf("String lenght is %d\n",len);
	 printf("String length using strlen string lib function is  %u\n",strlen(s) );
return 0;
}


