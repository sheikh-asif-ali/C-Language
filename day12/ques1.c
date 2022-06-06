/*  1.  Write a program to find the volume of a sphere using macros.Pass the radius as the argument to the macro.*/

#include<stdio.h>

#define vol(r) ((4.0f/3.0f) * (3.1415) * r * r *r) ;

int main()
{
int r;
float a=1;
printf("Enter radius of the circle: ");
scanf("%d", &r);

a=vol(r);
printf("Volume of Sphere: %f\n",a);
return 0;
}
