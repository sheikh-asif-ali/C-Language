/*6. Write a C program to remove characters in a given string except alphabets*/

#include<stdio.h>
void main()
{
   char c1[100],c2[100];
   int i, j;

   printf("Enter string: ");
   fgets(c1, sizeof(c1), stdin);

   for(i=0,j=0;c1[i]!='\0';i++)
   {
     if((c1[i]>='A' && c1[i]<='Z')||(c1[i]>='a' && c1[i]<='z'))
     {
        c2[j]=c1[i];
        j++;
     }
   }
   c2[j]='\0';

   printf("Displaying string: %s",c2);
}
