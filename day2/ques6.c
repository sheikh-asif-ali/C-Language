//6.  Write a program to find the area and the perimeter of a circle. Take radius “r” as input.

#include<stdio.h>

void main()
{
	float r,area,per;
	printf("Enter the radius of circle\n");
	scanf("%f",&r);

	area=3.14*r*r;
	per=2*3.14*r;

	printf("Area of circle is: %f\n",area);
	printf("Perimeter of circle is: %f\n",per);
}


