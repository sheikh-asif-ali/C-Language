#include<stdio.h>
int count=0;  //global variable decleration
int increment();

void main()
{
        
                increment();
        printf("In main count 1st time is %d\n",count);
                increment();
        printf("In main count 2nd time is %d\n",count);
                increment();
        printf("In main count 3rd time is %d\n",count);

}
int increment()
{
                count++;
        printf("In function count is %d\n", count); 
}

