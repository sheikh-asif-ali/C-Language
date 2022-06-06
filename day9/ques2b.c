/* A C program contains the following declaration
char *color[6] = {“red”, “green”, “blue”, “white”, “black”, “yellow”};
a. What is the meaning of color?
b. What is the meaning of (color+2);
c. What is the value of *color?
d. What is the value of *(color+2)?
e. How do color[5] and *(color + 5) differ?. */

#include<stdio.h>

void main()
{
	char *color[6] = {"red", "green", "blue", "white", "black", "yellow"};

	printf("Meaning of color is: %s\n",*color);

	printf("Meaning of (color+2): %s\n",*(color+2));
	
	printf("Value of *color: %p\n",*color);

        printf("Value of color *(color+2): %p\n", *(color+2));

        printf("Color[5] is: %s and *(color+5) is: %p\n", color[5], *(color+5));
        
}
