/*2. Write a C program to declare an integer and an integer pointer to it. Initialize the integer variable. Print the value of the int variable using pointer variable. Hint: You can use dereferencing operator */

#include<stdio.h>
void main()
{
int x=111, *ptr;
ptr=&x;
printf("Value of X is: %d\n",*ptr);
}
