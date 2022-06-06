/*7. Develop a C program to calculate simple interest using the formula I=PTR/100*/

#include<stdio.h>

void main()
{
        float si,p,t,r;
        printf("Enter details to calculate Simple Interest\n");
        printf("Enter Principle Amount, Time, Rate of Interest in sequence\n");
	scanf("%f %f %f",&p,&r,&t);

	si=(p*r*t)/100;
        printf("\nInterest is: %f\n",si);
}

