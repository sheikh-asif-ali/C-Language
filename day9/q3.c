//3. Write a C program to demonstrate double pointer.

#include <stdio.h>
void main()
{
int a= 110;
int *aptr= &a;
int **bptr= &aptr;

printf("Value of a is %d & address is %p\n",a,&a);
printf("\n");
printf("Value of aptr is %d & address is %p\n",*aptr,&*aptr);
printf("\n");
printf("Value of bptr is %d & address is %p\n",**bptr,&**bptr);
}
