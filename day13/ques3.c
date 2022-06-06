/*3. Write a program that will concatenate two files, that is append the contents of one file at the end of another file and write the results into a third file.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	FILE *fptr1= fopen("file1.txt","r");
	FILE *fptr2= fopen("file2.txt","r");
	FILE *fptr3= fopen("file3.txt","w");

	if (fptr1==NULL || fptr2==NULL || fptr3==NULL)
	{
		printf("Could not open files");
		exit(0);
	}
	
	while( (ch = fgetc(fptr1)) != EOF)
	fputc(ch, fptr3);
	
	while( (ch = fgetc(fptr2)) != EOF)
	fputc(ch, fptr3);
	
	printf("Merged file1.txt and files2.txt into file3.txt");
	
	fclose(fptr1);
	fclose(fptr2);
	fclose(fptr3);
return 0;
}
