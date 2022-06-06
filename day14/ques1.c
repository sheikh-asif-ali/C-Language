//1. Write a program to find the smallest and greatest integers among all integers, which are provided through the command line.

#include<stdio.h>
#include<stdlib.h> 

int main(int argc, char *argv[]) 
{
    int a,b,c;
    
    if (argc > 4 || argc < 3) 
    {
        printf("enter 3 arguments only");
        return 0;
    }

    a = atoi(argv[1]); 
    b = atoi(argv[2]);
    c = atoi(argv[3]);
  
    if (a < 0 || b < 0 || c < 0) 
    {
        printf("enter only positive values in arguments !!");
        return 1;
    }
  
    if ((a == b && b == c && a == c)) 
    {
        printf("please enter three different value ");
        return 1;
    }
    else
    {
	if (a > b && a > c)
		printf("%d is largest\n", a);
	else if (b > c && b > a) 
		    printf ("%d is largest\n", b);  
	else if (c > a && c > b) 
		    printf("%d is largest\n",c);
    }
    return 0;
}
