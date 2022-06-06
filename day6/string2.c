#include<stdio.h>
void main()
{
        char c;
        printf("Enter a character");
	c=getc(stdin);
        
	printf("Character entered: %c",c);
	putc(stdin);
}

