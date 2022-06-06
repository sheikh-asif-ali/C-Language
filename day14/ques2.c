#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{ 
	char s[50];
	char name[5];
	int i,n,rn;
	float mk;
	
	FILE *fw;
    	if (argc < 2)
    	{
    		printf("Error! Enter text file name after executable file\n");
		return 0;
    	}
    	else
    	{
    		fw = fopen(argv[1],"w");
    	}
    	
    	printf("Enter the number of Students:\n");
	scanf("%d",&n);	
	
    	if(fw==NULL)
	{
		printf("Error!\n");
		return 0;
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
		fprintf(fw,"RollNo:%d\tName:%s\tMarks:%f\n",rn,name,mk);	
	}
	fclose(fw);
	
	FILE *fr;
	fr = fopen("ques2.txt","r");

	printf("\nNow reading from the file\n");
	
    	while(fscanf(fr,"%s",s) != EOF)
    	{
        	printf("%s\n",s);
    	}
	fclose(fr);
}	
