#include<stdio.h>
void area(float); //prototype decleration
void main()
{
	float rad;
	printf("\n Enter radius: ");
	scanf("%f",&rad);
	area(rad);

}
void area(float r)
{
	float area_circle;
	area_circle = 3.14*r*r;
	printf("Area of circle = %f\n",area_circle);
}
