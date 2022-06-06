//Write a C program to find the maximum of 2 numbers using Conditional operator.

#include <stdio.h>
void main()
{
    int x,y;
    printf("Enter 2 integers to compare\n");
    scanf("%d%d",&x,&y);
    if(x==y)
	    printf("Both are same\n");
    else
	    (x>y)? (printf("1st Integer is Bigger\n")) : (printf("2nd Integer is Bigger\n"));
}

