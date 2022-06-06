//1. Write a swap function to perform the swap operation.

#include<stdio.h>
int swap(int *, int *);
void main()
{
        int x,y;
        printf("Enter 2 integers\n");
        scanf("%d \t %d",&x,&y);
        swap(&x,&y);
}
int swap(int *a,int *b)
{
        int temp= *a;
        *a= *b;
        *b= temp;
        printf("After Swapping\nA= %d\nB= %d\n",*(a),*(b));
}

