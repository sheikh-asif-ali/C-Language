/*Write a C program to demonstrate functionality of the fseek library function. (Use SEEK_SET, SEEK_CUR, SEEK_END. )*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fw;
	fw = fopen("fseek.txt","w");
	fputs("C program to demonstrate functionality of the fseek library function",fw);
	fclose(fw);
	
	FILE *fr;
	char c[100];
	fr = fopen("fseek.txt","r");
	
	fgets(c,100,fr);
	printf("Before fseek:  %s\n",c);
	
	fseek(fr, 25, SEEK_SET); //set cursor at 25st position
	fgets(c,100,fr);
	printf("\nAfter SEEK_SET to 25: %s\n",c);
	
	rewind(fr);
	fseek(fr, 10, SEEK_CUR); //set cursor at current 10 position
	fgets(c,100,fr);
	printf("\nAfter SEEK_CUR to 10: %s\n",c);
	
	fseek(fr, -8, SEEK_END); //set cursor at end-8
	fgets(c,100,fr);
	printf("\nAfter SEEK_END to -8: %s\n",c);
	fclose(fr);
	return 0;
}
