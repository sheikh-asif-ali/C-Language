//5. A C program contains the following declarations and initial assignments: 

#include<stdio.h>

int main()
{
	int i=8,j=5,ans;
	float x=0.005,y=0.01;
	char c;
	char d;

	ans=(3*i*j)%(2*d);
	printf("%d\n",ans);
	
	ans=(i*j)%(c+2*d)/(x*y);
	printf("%d\n",ans);
	
	ans=5*(i + j)>'c';
	printf("%d\n",ans);
	
	ans=(2*x)+(y==0);
	printf("%d \n",ans);

	ans=(x>y)&&(i>0)||(j<5);
	printf("%d\n",ans);

	return 0;
}
