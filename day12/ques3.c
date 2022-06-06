/* Develop programs to demonstrate the functionality of preprocessor operator ## and also conditional compilation.*/

#include<stdio.h>
#define VER 5
int main()
{
#ifndef VER
#error "VER not defined"
#endif

#if VER == 1
	printf("This is version 1. \n");

#elif VER == 2
	printf("This is version 2. \n");

#else
	printf("This is 3+ version. \n");

#endif
	return 0;
}

