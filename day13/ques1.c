/*1. Write a program to read the Roll No, name and marks of a student and store it in a text file.If the file already exists, add information to it.*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	char s[50];
	char name[5];
	int i,n,rn;
	float mk;
	
	printf("Enter the number of Students:\n");
	scanf("%d",&n);
	
	FILE * fptr;
	fptr = fopen("ques1.txt","w");
	
	if(fptr==NULL)
	{
		printf("Error!\n");
		exit(0);
	}
	printf("File Open Successfull\n");
	
	for(i=0;i<n;i++) 
	{
		printf("Enter RollNo:");
		scanf("%d",&rn);
		printf("For RollNo %d \tEnter name:",rn);
		scanf("%s",name);
		printf("Enter marks:");
		scanf("%f",&mk);
		fprintf(fptr,"RollNo:%d\tName:%s\tMarks:%f\n",rn,name,mk);	
	}
	fclose(fptr);
	printf("\nNow reading from the file\n");
	
	FILE *fr;
	fr= fopen("ques1.txt","r");
	while(fscanf(fr,"%s",s) != EOF)
	{
		printf("\n%s\n",s);
	}
	fclose(fr);
}

