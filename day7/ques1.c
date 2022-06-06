//1. Write c program that declares and initialize(to any value you like)char,an int,a double and float. Your program should then print the address of and value stored in each of variables.//

#include<stdio.h>
void main()
{
 	int i= 55, *ptr1;
 	char c='D', *ptr2;
 	float f= 0.506, *ptr3;
 	double d= 6.123456, *ptr4;
 
 	ptr1=&i;
 	ptr2=&c;
 	ptr3=&f;
 	ptr4=&d;
 	printf("Integer value is: %d and the Address is: %p\n",*ptr1,ptr1);
 	printf("Character value is: %c and the Address is: %p\n",*ptr2,ptr2);
 	printf("Float value is: %f and the Address is: %p\n",*ptr3,ptr3);
 	printf("Double value is: %lf and the Address is: %p\n",*ptr4,ptr4);
}
