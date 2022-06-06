/*4. Write a program to read the Roll No, name and marks of a student and store it in to a binary file and read student records and print on standard output (use fwrite and fread library functions).*/

#include<stdio.h>
#include<stdlib.h>

struct student
{
int roll;
char name[25];
float score;
}s[10];

int main()
{
	int i,n;
	printf("Enter the number of Students:\n");
	scanf("%d",&n);
	
	FILE *wptr;
	;
	if( (wptr=fopen("ques4.bin","wb"))==NULL)
	{
		printf("Error!\n");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter roll number:\n");
		scanf(" %d", &s[i].roll);
		printf("Enter Name:\n");
		scanf(" %s", s[i].name);
		printf("Enter marks:\n");
		scanf(" %f", &s[i].score);
		fwrite(&s, sizeof(struct student), 1, wptr);	
	}
	fclose(wptr);
	
	FILE *rptr;
	if( (rptr = fopen("ques4.bin","rb"))==NULL)
	{
		printf("Error!\n");
		exit(1);
	}
	printf("File Open Successfull\n");
	printf("Reading from bin file\n");
	for(i=0;i<n;i++)
	{
		fread(&s, sizeof(struct student), 1, rptr);
		printf("%d\t %s\t %f\n",s[i].roll,s[i].name,s[i].score);
	}
	fclose(rptr);
	
return 0;
}
