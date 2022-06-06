/*Write a C program to demonstrate double pointer.*/
#include<stdio.h>
int main()
{
	int num = 50;
	int *p1; // pointer to int
	int **p2; // pointer to pointer

	p1 =&num;
	p2 =&p1;

	printf("value of *p1 is: %d\n", *p1);
	printf("value of **p2 is: %d\n", *p1);
	printf("address of num is: %p\n", &num);
	printf("address of *p1 is: %p\n", *p1);
	printf("address of **p2 is %p\n", *p1);

	return 0;

}


