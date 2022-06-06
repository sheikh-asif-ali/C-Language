
#include<stdio.h>
void max(void);
void min(void);
struct student
{
int roll;
char name[25];
char sex;
float score;
}s[5];

int main()
{
	int i;
	printf("Enter Details of Students:\n\n");

	for(i=0;i<5;i++)
	{
		printf("Enter roll number:\n");
		scanf(" %d", &s[i].roll);
		printf("Enter Name:\n");
		scanf(" %s", s[i].name);
		printf("Enter sex:\n");
		scanf(" %c", &s[i].sex);
		printf("Enter marks:\n");
		scanf(" %f", &s[i].score);
	}		
	
	printf("\nGiven Inputs are: \n");
	for(i=0;i<5;i++)
	{
		printf("%d\t %s\t %c\t %f\n",s[i].roll,s[i].name,s[i].sex,s[i].score);
	}
	max();
	min();
	
return 0;
}
void max()
{
	int i=0;
	float max_score;
	max_score=s[0].score;
	for(int i=0;i<5;i++)
	{
		if(max_score<s[i].score)
		max_score=s[i].score;
	}
	printf("\nHighest markes is: %f\n",max_score);
	
}
void min()
{
	int i=0;
	float min_score=100;
	min_score=s[0].score;
	for(i=0;i<5;i++)
	{
		if(min_score>s[i].score)
		min_score=s[i].score;
	}
	printf("\nLowest markes is: %f\n",min_score);
}

